    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main(){
    	int t, a, b, x, y;
     
    	cin >> t;
    	for(int i = 0; i < t; i++){
    		cin >> a >> b;
    		int moves = 0;
    		while(a != b){
    			if(a < b && abs(a - b) % 2 != 0){
    				a += abs(a - b);
    				moves++;
    			} else if(a < b && abs(a - b) % 2 == 0){
    				a += (abs(a - b) - 1);
    				moves++;
    			} else if(a > b && abs(a - b) % 2 != 0){
    				a -= (abs(a - b) + 1);
    				moves++;
    			} else if(a > b && abs(a - b) % 2 == 0){
    				a -= abs(a - b);
    				moves++;
    			}
    		}
    		cout << moves << endl;
    	}
     
    	return 0;
    }
