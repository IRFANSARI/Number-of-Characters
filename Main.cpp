#include <bits/stdc++.h>
#include "fileToString.h"
#include "stringToMap.h"
using namespace std;

int main(int argc, char *argv[]) {
	string file = fileToString(argv[1]);
	
	vector<pair<char, int>> elementPairs = stringToMap(file);
	
	for(auto i = 0; i<elementPairs.size(); i++) {
		cout << elementPairs[i].first << "\t" << elementPairs[i].second << endl;
	}
	
	
	
	
	return 0;
}
