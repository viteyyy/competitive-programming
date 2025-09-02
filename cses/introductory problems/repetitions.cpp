#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	string str;
	int longest = 1;
	int maior = longest;
	getline(cin, str);
	for(int i = 0; i < str.size() - 1; i++){
		if(str[i] == str[i + 1]){
			longest++;
			if(maior < longest){
				maior = longest;
			}
		} else{
			longest = 1;
		}
	}
	cout << maior << endl;
 
    return 0;
}
