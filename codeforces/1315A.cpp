    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main(){
    	int t, a, b, x, y;
     
    	cin >> t;
    	
    	for(int i = 0; i < t; i++){
    		cin >> a >> b >> x >> y;
    		cout << max(max(x, a - 1 - x) * b, a * max(y, b - 1 - y)) << endl;
    	}
     
    	return 0;
    }
