#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;
	cout << "I hate ";
	for(int i = 0; i < n; i++){
		if(i + 1 == n){
			cout << "it" << endl;
		} else{
			cout << "that ";
			if(i % 2 == 0){
				cout << "I love ";
			} else{
				cout << "I hate ";
			}
		}
	}
	cout << endl;

	return 0;
}
