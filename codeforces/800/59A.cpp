#include <bits/stdc++.h>

using namespace std;

int main(){
	string word;
	int upper = 0, lower = 0;

	cin >> word;
	for(int i = 0; i < word.size(); i++){
		if(((int) word[i]) > 90){
			lower++;
		} else{
			upper++;
		}
	}
	if(upper > lower){
		for(int i = 0; i < word.size(); i++){
			cout << (char) toupper(word[i]);
		}
	} else{
		for(int i = 0; i < word.size(); i++){
			cout << (char) tolower(word[i]);
		}
	}
	cout << endl;

	return 0;
}
