#include <bits/stdc++.h>

using namespace std;

int main(){
	int q, n;

	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> n;
		if(n % 2 == 0 && n > 2){
			cout << 0 << endl;
		} else if(n % 2 == 0 && n == 2){
			cout << 2 << endl;
		} else if(n % 2 != 0){
			cout << 1 << endl;
		}
	}

	return 0;
}
