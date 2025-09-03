#include <bits/stdc++.h>

using namespace std;

int main(){
	string str1, str2;
	int ans = 0;

	cin >> str1;
	cin >> str2;
	for(int i = 0; i < str1.size(); i++){
		if(tolower(str1[i]) != tolower(str2[i])){
			if(tolower(str1[i]) < tolower(str2[i])){
				ans = -1;
				cout << ans << endl;
				return 0;
			} else if(tolower(str2[i]) < tolower(str1[i])){
				ans = 1;
				cout << ans << endl;
				return 0;
			}
		}
	}
	cout << ans << endl;

	return 0;
}
