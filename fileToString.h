#include<bits/stdc++.h>
using namespace std;

string fileToString(string filePath) {
	fstream file;
	file.open(filePath, ios::in | ios::out | ios::app);
	file << "�";
	file.seekg(0);
	string str;
	getline(file, str, '�');
	file.close();
	
	ofstream file2;
	file2.open(filePath);
	file2 << str;
	file.close();
	
	return str;
}
