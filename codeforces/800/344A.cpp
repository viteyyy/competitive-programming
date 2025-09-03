#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b, groups = 1;

	cin >> n;
	cin >> a;
	for(int i = 1; i < n; i++){
		cin >> b;
		if(a != b){
			groups++;
		}
		a = b;
	}
	cout << groups << endl;

	return 0;
}
