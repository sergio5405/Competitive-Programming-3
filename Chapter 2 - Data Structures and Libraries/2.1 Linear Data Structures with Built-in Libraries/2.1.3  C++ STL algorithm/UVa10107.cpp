#include <stdio.h>
#include <algorithm>

#define MAX_SIZE 10000

using namespace std;


int main(){
	int N;
	int arr[MAX_SIZE];
	int i = 0;
	while(scanf("%d", &arr[i++])!=EOF){

		sort(arr, arr + i);

		if(i%2==0){
			printf("%d\n", (arr[i/2]+arr[i/2 - 1])/2 );
		}else{
			printf("%d\n", arr[i/2]);
		}
	}
	
	return 0;
}