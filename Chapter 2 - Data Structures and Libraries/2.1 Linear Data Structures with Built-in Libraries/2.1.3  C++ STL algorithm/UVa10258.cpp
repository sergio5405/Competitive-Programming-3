#include <iostream>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;

struct Contestant{
	bool submitted = false;
	int contestant;
	int timeProblems[10];
	set<int> solved;
};

bool ContestantCompare(Contestant one, Contestant two) {
	if (one.solved.size()!=two.solved.size())
		return one.solved.size() < two.solved.size();

	int time1 = 0, time2 = 0;
	for (auto it: one.solved){
		time1 += one.timeProblems[it];
	}

	for (auto it: two.solved){
		time2 += two.timeProblems[it];
	}

	return time1 < time2;
}

int main(){
	int T;
	string line;
		
	cin >> T;
	getline(cin,line);
	getline(cin,line);


	while(T--){
		getline(cin,line);

		Contestant arr[101];
		for (int i = 0; i <= 100; ++i){
			arr[i].submitted = false;
			for (int j = 0; j < 10; ++j){
				arr[i].timeProblems[j] = 0;
			}
			arr[i].solved.clear();
		}

		while(!line.empty()){
			stringstream stream(line);

			int contestant, problem, timeProb;
			char judgement;
			stream >> contestant >> problem >> timeProb >> judgement;

			arr[contestant].contestant = contestant;
			arr[contestant].submitted = true;
			if(arr[contestant].solved.find(problem)==arr[contestant].solved.end()){
				if(judgement=='C'){
					arr[contestant].timeProblems[problem] += timeProb;
					arr[contestant].solved.insert(problem);
				}else if (judgement=='I'){
					arr[contestant].timeProblems[problem] += 20;
				}
			}
			line.clear();
			getline(cin,line);
		}

		sort(arr, arr+101, ContestantCompare);

		for (int i = 100; i>0; i--){
			if(arr[i].submitted){
				int sum = 0;
				for (auto it: arr[i].solved){
					sum += arr[i].timeProblems[it];
				}
				cout << arr[i].contestant << " " << arr[i].solved.size() << " " << sum << endl;
			}
		}
		if(T>0)
			cout << endl;
	}
	
	return 0;
}