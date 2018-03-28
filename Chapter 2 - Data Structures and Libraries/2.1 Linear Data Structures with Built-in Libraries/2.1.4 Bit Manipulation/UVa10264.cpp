#include <iostream>
#include <sstream>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

typedef unsigned int ui;

int main(){
	int N;
	ui weights[32768];
	ui potencies[32768];
	

	while(scanf("%d", &N)!=EOF){
		int total = (int)pow(2, N);

		for (int i = 0; i < total; ++i){
			scanf("%u", &weights[i]);
		}

		for (int i = 0; i < total; ++i){
			ui mask = 1<<N;
			potencies[i] = 0;
			for (int j = 0; j < N; ++j){
				mask>>=1;
				potencies[i] += weights[i^mask];
			}
		}

		ui maxSum = 0;
		for (int i = 0; i < total; ++i){
			ui mask = 1<<N;
			for (int j = 0; j < N; ++j){
				mask>>=1;
				ui sum = potencies[i]+potencies[i^mask];
				if(sum>maxSum)
					maxSum = sum;
			}
		}


		printf("%u\n", maxSum);
	}
	
	return 0;
}