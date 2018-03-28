#include <stdio.h>

int main (){
	int a, b, x, y, resp, t;
	
	scanf("%d", &t);

	for (int i = 0; i < t; i++){
		scanf("%d %d", &a, &b);

		if (a>b)
			putchar('>');
		else if (b>a)
			putchar('<');
		else 
			putchar('=');

		putchar('\n');
		
	}
	
	return 0;
}