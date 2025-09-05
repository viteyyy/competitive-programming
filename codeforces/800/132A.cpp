#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;
	int a;
	vector<int> v;
	for(int i = 0; i < n; i++){
		cin >> a;
		v.push_back(a);
	}
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < n; j++){
			if(v[j] == i){
				cout << (j + 1) << " ";
			}
		}
	}
	cout << endl;

	return 0;
}
