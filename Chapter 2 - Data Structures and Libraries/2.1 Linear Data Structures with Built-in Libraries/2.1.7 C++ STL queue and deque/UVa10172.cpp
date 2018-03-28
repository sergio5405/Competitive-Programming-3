#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

typedef vector<queue<int> > QueueArray;

int main(){
	int T, N, S, Q, tiempo, numCar, st;

	scanf("%d", &T);

	while(T--){
		scanf("%d %d %d", &N, &S, &Q);
		tiempo = 0;

		QueueArray arr;

		stack<int> stack;

		for (int i = 0; i < N; i++){
			arr.push_back(queue<int>());

			scanf("%d", &numCar);
			for (int j = 0; j < numCar; j++){
				scanf("%d", &st);
				st--;
				arr[i].push(st);
			}
		}

		int act = 0;
		bool finished = false;
		while(!finished){
			//unload
			while(!stack.empty()){
				int elem = stack.top();
				if(elem == act){
					tiempo++;
					stack.pop();
				}else if(arr[act].size()<Q){
					arr[act].push(elem);
					tiempo++;
					stack.pop();
				}else{
					break;
				}
			}

			//load
			while(!arr[act].empty()&&stack.size()<S){
				stack.push(arr[act].front());
				arr[act].pop();
				tiempo++;
			}

			if(act==N-1){
				act=0;
			}else{
				act++;
			}

			finished = true;
			for (int i = 0; i < N; i++){
				if(!arr[i].empty()){
					finished=false;
					break;
				}
			}
			finished = finished&&stack.empty();

			
			tiempo+=2;

		}

		tiempo-=2;

		printf("%d\n", tiempo);

	}

	return 0;

}