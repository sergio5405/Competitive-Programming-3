#include <iostream>
#include <list>
#include <string>
#include <algorithm>

#define endl "\n" 

int main(){
	std::ios::sync_with_stdio(false);

	std::string line;
	while(std::cin >> line){
		std::list<char> ll;
  		std::list<char>::iterator it;
  		it = ll.begin();
  		for (int i = 0; i < line.length(); ++i){
  			if(line[i]=='['){
  				it = ll.begin();
  			}else if(line[i]==']'){
  				it = ll.end();
  			}else{
  				ll.insert(it, line[i]);
  			}
  		}

  		for (it=ll.begin(); it!=ll.end(); ++it)
    		std::cout << *it;
		std::cout << endl;
	}
	
	return 0;
}