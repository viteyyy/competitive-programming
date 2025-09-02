    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main(){
    	int n, a, swaps = 0, menor, indexmenor;
     
    	cin >> n;
    	vector<int> ar;
    	for(int i = 0; i < n; i++){
    		cin >> a;
    		ar.push_back(a);
    	}
    	vector<pair<int, int>> index;
    	for(int i = 0; i < n; i++){
    		int j;
    		menor = ar[i];
    		for(j = i; j < n; j++){
    			if(menor >= ar[j]){
    				menor = ar[j];
    				indexmenor = j;
    			}
    		}
    		if(ar[i] >= menor){
    			int aux = ar[i];
    			ar[i] = ar[indexmenor];
    			ar[indexmenor] = aux;
    			swaps++;
    			index.push_back({i, indexmenor});
    		}
    	}
    	cout << swaps << endl;
    	for(auto i : index){
    		cout << i.first << " " << i.second << endl;
    	}
     
    	return 0;
    }
