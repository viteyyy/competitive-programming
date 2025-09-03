#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, anton = 0, danik = 0;
	string str;

	cin >> n;
	cin >> str;
	for(int i = 0; i < n; i++){
		if(str[i] == 'A'){
			anton++;
		} else{
			danik++;
		}
	}
	if(anton > danik){
		cout << "Anton" << endl;
	} else if(anton < danik){
		cout << "Danik" << endl;
	} else{
		cout << "Friendship" << endl;
	}

	return 0;
}
