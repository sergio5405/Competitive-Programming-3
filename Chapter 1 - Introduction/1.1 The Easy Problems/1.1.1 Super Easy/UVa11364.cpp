#include <stdio.h>

int main (){
	int t, n, min=99, max=0, x;
	
	scanf("%d", &t);

	for (int i = 0; i < t; i++){
		scanf("%d", &n);

		min=99;
		max=0;
		
		for (int j = 0; j < n; j++){
			scanf("%d", &x);
			if(x<min)
				min = x;
			if(x>max)
				max = x;
		}

	

		printf("%d\n", (max-min)*2);
		
	}
	
	return 0;
}