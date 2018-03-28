//706 LCD Display

#include <stdio.h>
#include <string>

using namespace std;

int main(){

	int s;
	string numero;

	scanf("%d", &s);

	while(s!=0){

		scanf("%s", &numero);

		printf("%c\n", numero[0]);
		

		scanf("%d", &s);
	}



	return 0;
}