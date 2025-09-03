#include <bits/stdc++.h>

using namespace std;

int main(){
	int x, moves = 0, elephant = 0;

	cin >> x;
	while(elephant <= x){
		if((elephant + 5) <= x){
			elephant += 5;
			moves++;
		} else if((elephant + 4) <= x){
			elephant += 4;
			moves++;
		} else if((elephant + 3) <= x){
			elephant += 3;
			moves++;
		} else if((elephant + 2) <= x){
			elephant += 2;
			moves++;
		} else if((elephant + 1) <= x){
			elephant += 1;
			moves++;
		} else{
			break;
		}
	}
	cout << moves << endl;

	return 0;
}
