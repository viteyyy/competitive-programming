#include <bits/stdc++.h>
using namespace std;
 
int main(){
	unsigned long long size, count = 0;
	unsigned long long i;
	cin >> size;
	unsigned long long ar[size];
	for(i = 0; i < size; i++){
		cin >> ar[i];
	}
	size = size - 1;
	for(i = 0; i < size; i++){
		while(ar[i+1] < ar[i]){
			ar[i+1]++;
			count++;
		}
	}
	cout << count << endl;
 
	return 0;
}
