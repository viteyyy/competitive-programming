    #include <bits/stdc++.h>
     
    using namespace std;
     
    typedef long long ll;
     
    int main(){
    	int linhas, colunas, n;
    	int maiorLinhas = 0, maiorColunas = 0, maiorL = 0, maiorC = 0;
     
    	cin >> linhas >> colunas;
    	vector<vector<int>> matriz;
    	for(int i = 0; i < linhas; i++){
    		vector<int> temp;
    		for(int j = 0; j < colunas; j++){
    			cin >> n;
    			temp.push_back(n);
    		}
    		matriz.push_back(temp);
    	}
    	for(int i = 0; i < linhas; i++){
    		for(int j = 0; j < colunas; j++){
    			maiorLinhas += matriz[i][j];
    		}
    		if(maiorLinhas >= maiorL){
    			maiorL = maiorLinhas;
    		}
    		maiorLinhas = 0;
    	}
    	for(int j = 0; j < colunas; j++){
    		for(int i = 0; i < linhas; i++){
    			maiorColunas += matriz[i][j];
    		}
    		if(maiorColunas >= maiorC){
    			maiorC = maiorColunas;
    		}
    		maiorColunas = 0;
    	}
    	if(maiorL >= maiorC){
    		cout << maiorL << endl;
    	} else{
    		cout << maiorC << endl;
    	}
     
    	return 0;
    }
     
