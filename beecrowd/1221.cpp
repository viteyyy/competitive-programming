#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		int divisors = 0;
		for(int j = 1; j * j < a; j++){
			if(a % j == 0){
				divisors++;
			}
		}
		if(divisors > 1){
			cout << "Not Prime" << endl;
		} else{
			cout << "Prime" << endl;
		}
	}

	return 0;
}
