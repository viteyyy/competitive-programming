    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main(){
    	int t, input, n = 1;
     
    	cin >> t;
    	while(t != 0){
    		vector<int> v;
    		for(int i = 0; i < t; i++){
    			cin >> input;
    			v.push_back(input);
    		}
    		for(int x = 0; x < t; x++){
    			if(v[x] == x+1){
    				cout << "Teste " << n << endl << v[x] << endl;
    				n++;
    			}
    		}
    		cin >> t;
    	}
    	return 0;
    }
     
