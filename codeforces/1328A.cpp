#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned int  a, b, t, moves;

	cin >> t;
	for(unsigned int i = 0; i < t; i++){
		cin >> a >> b;
		if(a % b == 0){
			cout <<  0 << "\n";
		} else{
			moves = b - a % b;
			cout << moves << "\n";
		}
	}

	return 0;
}
