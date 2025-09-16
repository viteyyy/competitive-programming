#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, input;
	
	cin >> n;
	vector<int> a;
	for(int i = 0; i < n; i++){
		cin >> input;
		a.push_back(input);
	}
	cin >> m;
	vector<int> b;
	for(int i = 0; i < m; i++){
		cin >> input;
		b.push_back(input);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
				int soma = a[i] + b[j];
				int testA = 1, testB = 1;
				for(int k = 0; k < n; k++){
					if(soma == a[k]){
						testA = 0;
						break;
					}
				}
				for(int k = 0; k < m; k++){
					if(soma == b[k]){
						testB = 0;
						break;
					}
				}
				if(testA == 1 && testB == 1){
					cout << a[i] << " " << b[j] << endl;
					return 0;
				}
			}
		}

	return 0;
}
