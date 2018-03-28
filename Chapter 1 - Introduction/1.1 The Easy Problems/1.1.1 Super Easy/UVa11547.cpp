#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main (){
	int T, n, resp, form;
	
	scanf("%d", &T);

	for (int t = 0; t < T; ++t){
		scanf("%d", &n);

		form = abs(315*n + 36962);
		resp = (form / 10) % 10;

		printf("%d\n", resp);
	}

	
	return 0;
}