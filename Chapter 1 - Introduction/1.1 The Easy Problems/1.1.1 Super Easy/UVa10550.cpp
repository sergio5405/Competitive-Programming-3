#include <stdio.h>

int main (){
	int n1, n2, n3, n4;
	
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	while(!(n1==0&&n2==0&&n3==0&&n4==0)){
		int suma = 0;
		if (n2>n1)
			suma += (n1+40-n2)*9;
		else
			suma += (n1 - n2)*9;

		if (n3>n2)
			suma += (n3-n2)*9;
		else
			suma += (n3+40-n2)*9;

		if (n4>n3)
			suma += (n3+40-n4)*9;
		else
			suma += (n3 - n4)*9;

		suma += 1080;

		printf("%d\n", suma);

		scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	}
	
	return 0;
}