#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <vector>

#define endl "\n"

int N;
std::string word, wordToConstruct, solution;
std::stack<char> st;


void printArl(){
	for (int i = 0; i < solution.length()-1; ++i){
		std::cout << solution[i] << " ";
	}

	std::cout << solution[solution.length()-1]<< endl;
}

void checkSolutions(int i, int j){
	if(j == N){
		printArl();
		return;
	}
	
	if(i < N){
		st.push(word[i]);
		solution += "i";
		checkSolutions(i+1, j);
		solution.erase(i+j, 1);
		st.pop();
	}
	
	if(!st.empty()){
		if(st.top() == wordToConstruct[j]){
			st.pop();
			solution += "o";
			checkSolutions(i, j+1);
			solution.erase(i+j, 1);
			st.push(wordToConstruct[j]);
		}
	}	
}

int main(){
	std::ios_base::sync_with_stdio(0);std::cin.tie(0);

	
	while(std::cin >> word >> wordToConstruct){
		std::cout << "[" << endl;
		
		if(word.length()==wordToConstruct.length()){
			N = word.length();
			checkSolutions(0,0);
		}

		
		// for (int i = 0; i < solutions.size(); ++i){
		// 	for (int j = 0; j < solutions[i].size(); ++j){
		// 		std::cout << solutions[i][j] << " ";
		// 	}
		// 	std::cout << endl;
		// }

		std::cout << "]" << endl;
	}
	
	return 0;
}