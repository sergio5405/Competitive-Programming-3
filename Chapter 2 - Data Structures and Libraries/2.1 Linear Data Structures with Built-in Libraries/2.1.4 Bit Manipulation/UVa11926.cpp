#include <iostream>
#include <bitset>
#include <string>
#include <vector>
#include <algorithm>

#define endl "\n" 

std::bitset<1000001> bits;

bool checkConflict(int n, int m, std::vector<int> &s, std::vector<int> &e, std::vector<int> &r){
	for (int i = 0; i < n; ++i){
		int start = s[i], end = e[i];
		for (int t = start + 1; t <= end; ++t){
			if (bits.test(t))
				return true;
			else
				bits.set(t);
		}
	}
	
	for (int i = n; i < n + m; ++i){
		int start = s[i], end = e[i], interval = r[i];     
		while (start < 1000000){
			for (int t = start + 1; t <= end; ++t){
				if (bits.test(t))
					return true;
				else
					bits.set(t);
			}          
			start += interval;
			end = std::min(end + interval, 1000000);
		}
	}
	return false;
}

int main(){
	std::ios::sync_with_stdio(false);

	int N, M;//, a, b, rep;
	while(std::cin >> N >> M, !(N == 0 && M == 0)){
		bits.reset();
		std::vector<int> s(N+M), e(N+M), r(N+M);

		for (int i = 0; i < N; ++i)
			std::cin >> s[i] >> e[i];
		for (int i = N; i < N + M; ++i)
			std::cin >> s[i] >> e[i] >> r[i];

		std::cout << (checkConflict(N, M, s, e, r)?"CONFLICT":"NO CONFLICT") << endl;
	}
	
	return 0;
}