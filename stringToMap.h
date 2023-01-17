#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b) {
	return a.second < b.second;
}

vector<pair<char, int>> stringToMap(string str) {
	map<char, int> mp;
	
	for(int i = 0; i < str.size(); i++) {
		auto itr = mp.find(str[i]);
		
		if(itr == mp.end())
			mp.insert(pair<char, int> (str[i], 1));
		else
			itr->second += 1;
	}
	
	vector<pair<char, int>> v(mp.begin(), mp.end());
	sort(v.begin(), v.end(), cmp);

	return v;
}
