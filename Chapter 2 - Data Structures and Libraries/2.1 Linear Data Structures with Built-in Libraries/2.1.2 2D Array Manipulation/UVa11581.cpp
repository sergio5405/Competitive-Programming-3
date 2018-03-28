#include <iostream>
#include <string>

using namespace std;

bool equalArr(string one[], string two[]){
	for(int i = 0; i<3; i++){
		if(one[i].compare(two[i])!=0) return false;	
	}
	return true;
}

void printMatrix(string m[]){
	for(int i = 0; i<3; i++){
		cout<< m[i] << endl;
	}
	cout<< endl;
}

int main(){
	int T;

	string temp;

	cin >> T;
	getline(cin, temp);

	string array[3] = {"000", "000", "000"};
	string matrix[3];
	string work[3] = {"000", "000", "000"};;


	while(T--){
		int sum = -1;
		
		getline(cin, matrix[0]);

		getline(cin, matrix[0]);
		getline(cin, matrix[1]);
		getline(cin, matrix[2]);


		while(!equalArr(matrix, array)){
			for (int i = 0; i < 3; i++){
				for (int j = 0; j < 3; j++){
					int adjSum = 0;

					if(j>0)
						adjSum+=matrix[i][j-1]-'0';
					if(j<2)
						adjSum+=matrix[i][j+1]-'0';

					if(i>0)
						adjSum+=matrix[i-1][j]-'0';
					if(i<2)
						adjSum+=matrix[i+1][j]-'0';

					work[i][j] = '0' + (adjSum%2);
				}
			}

			for (int i = 0; i < 3; i++){
				for (int j = 0; j < 3; j++){
					matrix[i][j] = work[i][j];
				}
			}
			
			sum++;
		}
		cout << sum << endl;
	}
	
	return 0;
}