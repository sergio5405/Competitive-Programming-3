#include <stdio.h>

int main (){
	int S, B, L, R;

	scanf("%d %d", &S, &B);

	while(S!=0 && B!=0){
		int next[S+1];
		int prev[S+1];
		for (int i = 0; i <= S; i++){
			next[i] = i+1;
			prev[i] = i-1;
		}

		while(B--){
			scanf("%d %d", &L, &R);

			if (prev[L]>0)
				next[prev[L]]=next[R];

			if (next[R]>0)
				prev[next[R]]=prev[L];

			if (prev[L]>0){
				printf("%d ", prev[L]);
			}else{
				printf("* ");
			}

			if (next[R]<=S){
				printf("%d\n", next[R]);
			}else{
				printf("*\n");
			}	
		}

		printf("-\n");

		scanf("%d %d", &S, &B);
	}
	
	return 0;
}