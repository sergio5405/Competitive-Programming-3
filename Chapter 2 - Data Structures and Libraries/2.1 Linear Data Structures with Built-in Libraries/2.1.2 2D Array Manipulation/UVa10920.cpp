#include <stdio.h>
#include <math.h>

typedef unsigned long long ull;

int main (){
	ull SZ, P, row, col;

	scanf("%llu %llu", &SZ, &P);

	while(SZ!=0 && P!=0){
		ull sq = (ull) sqrt(P);

		if (sq*sq!=P||sq%2==0){
			if (sq%2==0)
				sq++;
			else
				sq+=2;
		}

		if(sq!=1){
			ull bf = sq-2;
			ull cat = (P - bf*bf - 1)/(sq-1);//0, 1, 2, 3

			if (cat == 0){
				row = sq;
				col = sq - (P - bf*bf);
			}else if (cat == 1){
				row = sq - ((P - bf*bf - 1)%(sq-1) + 1);
				col = 1;
			}else if (cat == 2){
				row = 1;
				col = 2 + ((P - bf*bf - 1)%(sq-1));
			}else{
				row = 2 + ((P - bf*bf - 1)%(sq-1));;
				col = sq;
			}
		}else{
			row = 1;
			col = 1;
		}

		row += (SZ - sq)/2;
		col += (SZ - sq)/2;

		printf("Line = %llu, column = %llu.\n", row, col);
		

		scanf("%llu %llu", &SZ, &P);
	}
	
	return 0;
}