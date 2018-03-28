#include <stdio.h>

int main (){
	int k, n, m, x, y;
	
	scanf("%d", &k);

	while(k!=0){
		scanf("%d %d", &n, &m);

		for (int i = 0; i < k; i++){
			scanf("%d %d", &x, &y);

			x-=n;
			y-=m;

			if (!(x&&y)){
				printf("divisa\n");
			}else if(x>0){
				if (y>0){
					printf("NE\n");
				}else{
					printf("SE\n");
				}
			}else{
				if (y>0){
					printf("NO\n");
				}else{
					printf("SO\n");
				}
			}


		}

		scanf("%d", &k);
	}

	
	return 0;
}