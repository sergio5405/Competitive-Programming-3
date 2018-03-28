#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


int main(){
	string word;

	

	while(true){
		getline(cin, word);

		if(word.compare("#")==0)
			break;
		

		if(!next_permutation(word.begin(), word.end()))
			cout << "No Successor" << endl;
		else
			cout << word << endl;
	}
	
	return 0;
}