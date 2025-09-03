#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	string t;

	cin >> s;
	cin >> t;
	if(s.size() != t.size()){
		cout << "NO" << endl;
		return 0;
	}
	int j = s.size() - 1;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != t[j]){
			cout << "NO" << endl;
			return 0;
		}
		j--;
	}
	cout << "YES" << endl;

	return 0;
}
