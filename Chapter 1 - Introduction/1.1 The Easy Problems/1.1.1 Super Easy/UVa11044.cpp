#include <stdio.h>

int main (){
	int M, N, x, y, resp, t;
	
	scanf("%d", &t);

	for (int i = 0; i < t; i++){
		scanf("%d %d", &M, &N);

		M-=2;
		N-=2;

		x = M/3;
		if(M%3!=0)x++;

		y = N/3;
		if(N%3!=0)y++;

		resp = x*y;

		printf("%d\n", resp);
	}
	
	return 0;
}