#include <bits/stdc++.h>

using namespace std;

int main(){
	int tests, n, x, ans;

	cin >> tests;
	for(int i = 0; i < tests; i++){
		cin >> x >> n;
		ans = 0;
		for(int j = 1; j <= n; j++){
			if(j % 2 != 0)
				ans += x;
			else
				ans -= x;
		}
		cout << ans << endl;
	}

	return 0;
}
