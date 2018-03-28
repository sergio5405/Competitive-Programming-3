#include <stdio.h>

int main (){
	int c;
	bool first = true;

	do {
		c=getchar();
		if (c=='\"'){
			putchar(first?'`':'\'');
			putchar(first?'`':'\'');
			
			first = first?false:true;
			continue;
		}
		putchar(c);
	} while (c != EOF);

	return 0;
}