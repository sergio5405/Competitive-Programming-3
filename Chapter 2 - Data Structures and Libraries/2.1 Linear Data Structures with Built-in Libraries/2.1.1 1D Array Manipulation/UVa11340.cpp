#include <stdio.h>
#include <iostream>
#include <map>
#include <string>

int main (){
	int M, N, K, cost, count;
	std::string line;
	char c;

	scanf("%d", &N);

	while(N--){
		std::map<char, int> mp;
		scanf("%d", &K);
		getchar();
		while(K--){
			scanf("%c %d", &c, &cost);
			getchar();
			mp[c] = cost;
		}
		count = 0;
		scanf("%d", &M);
		getchar();
		while(M--){
			std::getline (std::cin,line);

			for (int i = 0; i < line.length(); i++){
				if(mp.count(line[i])!=0){
					count+=mp[line[i]];
				}
			}
		}
		printf("%d.%02d$\n", count/100, count%100);

		
		// for(auto elem : mapa){
		//    std::cout << elem.first << ": " << elem.second << "\n";
		// }

	}
	
	return 0;
}