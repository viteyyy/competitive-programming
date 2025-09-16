#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	string a, b, c;

	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> a;
		cin >> b;
		cin >> c;
		int ans;
		for(int j = 0; j < c.size(); j++){
			if(c[j] != a[j] && c[j] != b[j]){
				cout << "NO" << endl;
				ans = 0;
				break;
			} else{
				ans = 1;
				continue;
			}
		}
		if(ans == 1){
			cout << "YES" << endl;
		}
	}

	return 0;
}
