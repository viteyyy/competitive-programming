#include <bits/stdc++.h>

using namespace std;

int main(){
	int k, n, w, borrow;

	cin >> k >> n >> w;
	for(int i = 1; i <= w; i++){
		n -= i * k;
	}
	if(n < 0){
		borrow = abs(n);
	} else{
		borrow = 0;
	}
	cout << borrow << endl;

	return 0;
}
