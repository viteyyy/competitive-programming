#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, a, ans = 0;

	cin >> n >> k;
	vector<int> v;
	for(int i = 0; i < n; i++){
		cin >> a;
		v.push_back(a);
	}
	for(int i = 0; i < v.size(); i++){
		if(v[i] > 0 && v[i] >= v[k - 1]){
			ans++;
		}
	}
	cout << ans << endl;

	return 0;
}
