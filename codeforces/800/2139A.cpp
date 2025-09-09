#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;

	cin >> t;
	int a, b;
	for(int i = 0; i < t; i++){
		cin >> a >> b;
		int tempa = a, tempb = b;
		int ans = 0;
		while(tempa != tempb){
			if(a % b == 0 || b % a == 0){
				tempa = tempb;
				ans++;
			} else if(tempa < tempb){
				tempa *= b;
				ans++;
			} else if(tempa > tempb){
				tempb *= a;
				ans++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
