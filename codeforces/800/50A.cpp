#include <bits/stdc++.h>

using namespace std;

int main(){
	int m, n, ans;

	cin >> m >> n;
	if(m % 2 == 0 && n % 2 == 0){
		ans = (m * n) / 2;
		cout << ans << endl;
	} else if(m % 2 != 0 && n % 2 != 0){
		ans = ((m * n) - 1) / 2;
		cout << ans << endl;
	} else if(m % 2 == 0 && n % 2 != 0){
		ans = (m * n) / 2;
		cout << ans << endl;
	} else if(m % 2 != 0 && n % 2 == 0){
		ans = (m * n) / 2;
		cout << ans << endl;
	}

	return 0;
}
