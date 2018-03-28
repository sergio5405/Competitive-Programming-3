#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

#define endl "\n" 


int curProcessed, N, curStack;
int order[1000];
std::stack<int> st;

bool putStack(){
	if (curStack<N){
		st.push(++curStack);
		return true;
	}

	return false;
}

bool possibleOrder(){
	curProcessed = 0;
	curStack = 0;

	while(!st.empty()||curStack<N){
		if(!st.empty()&&order[curProcessed]==st.top()){
			curProcessed++;
			st.pop();
		}else{
			if(!putStack())
				return false;
		}
	}

	if(curProcessed==N)
		return true;

	return false;
}

int main(){
	std::ios::sync_with_stdio(false);

	while(std::cin >> N, !(N == 0)){
		std::cin >> order[0];

		while(order[0]){
			while(!st.empty())
				st.pop();

			for (int i = 1; i < N; ++i)
				std::cin >> order[i];

			if(possibleOrder())
				std::cout << "Yes" << endl;
			else
				std::cout << "No" << endl;

			std::cin >> order[0];
		}

		std::cout << endl;
	}
	
	return 0;
}