#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	vector<int> v;

	cin >> str;
	stringstream ss;
	for(char c : str){
		if(isdigit(c)) ss << c;
		else ss << ' ';
	}
	int num;
	while(ss >> num){
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		if(i == v.size() - 1){
			cout << v[i];
			break;
		}
		cout << v[i] << "+";
	}
	cout << endl;

	return 0;
}
