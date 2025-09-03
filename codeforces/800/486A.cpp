#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, function;

	cin >> n;
	if(n % 2 == 0){
		function = n / 2;
	} else{
		function = - (n + 1) / 2;
	}
	cout << function << endl;

	return 0;
}
