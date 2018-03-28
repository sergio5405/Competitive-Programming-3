#include <stdio.h>
#include <stdlib.h>


int min(int a, int b){
	if (a<b) return a;
	return b;
}

int main (){
	int T, resp, M, N;

	char c;
	
	scanf("%d", &T);

	for (int t = 0; t < T; ++t){
		scanf("%c", &c);
		scanf("%c", &c);
		scanf("%d %d", &M, &N);

		if (c=='r'){
			resp = min(M, N); 
		}else if (c=='k'){
			resp = ((M*N)%2==0)?(M*N)/2:(M*N + 1)/2;
		}else if (c=='K'){
			M = (M%2!=0)? M/2 + 1: M/2;
			N = (N%2!=0)? N/2 + 1: N/2;

			resp = M*N;
		}else {
			if (M!=N){
				resp = min(M, N);
			}else{
				if (M%2==0){
					resp = M-1;
				}else{
					resp = M;
				}
			}
		}

		printf("%d\n", resp);
		
	}

	
	return 0;
}