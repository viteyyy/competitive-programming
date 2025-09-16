#include <bits/stdc++.h>

using namespace std;

int main(){
	int k, mini = 0;

	cin >> k;
	vector<int> months;
	for(int i = 0; i < 12; i++){
		int a;
		cin >> a;
		months.push_back(a);
	}
	sort(months.begin(), months.end(), greater<>());
	int grow = 0;
	for(int i = 0; i < 12; i++){
		if(grow == k || grow > k){
			break;
		} else{
			grow += months[i];
			mini++;
		}
	}
	if(grow < k){
		cout << -1 << endl;
	} else{
		cout << mini << endl;
	}

	return 0;
}
