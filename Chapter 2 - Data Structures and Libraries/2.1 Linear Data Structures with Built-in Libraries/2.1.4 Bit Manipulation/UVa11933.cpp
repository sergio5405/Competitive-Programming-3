#include <iostream>
#include <bitset>
#include <string>
#include <vector>
#include <algorithm>

#define endl "\n" 

int main(){
	std::ios::sync_with_stdio(false);

	int n;
	while(std::cin >> n, !(n == 0)){
		int x = 0, y = 0;
		bool first = true;
		while(n!=0){
			int set = n & -n;
			n^= set;

			if (first)
				x|=set;
			else
				y|=set;

			first = !first;
		}

		std::cout << x << " " << y << endl;
	}
	
	return 0;
}