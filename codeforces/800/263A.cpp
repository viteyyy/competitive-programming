#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<vector<int>> matrix(5, vector<int>(5, 0));
	int a, moves = 0;
	pair<int, int> index;

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> a;
			if(a == 1){
				index.first = i;
				index.second = j;
			}
			matrix[i][j] = a;
		}
	}
	while(matrix[2][2] != 1){
		if(index.first > 2){
			for(int i = index.first; i != 2; i--){
				for(int j = 0; j < 5; j++){
					int aux = matrix[i][j];
					matrix[i][j]  = matrix[i - 1][j];
					matrix[i - 1][j] = aux;
				}
				moves++;
			}
		} else if(index.first < 2){
			for(int i = index.first; i != 2; i++){
				for(int j = 0; j < 5; j++){
					int aux = matrix[i][j];
					matrix[i][j]  = matrix[i + 1][j];
					matrix[i + 1][j] = aux;
				}
				moves++;
			}
		}
		if(index.second > 2){
			for(int j = index.second; j != 2; j--){
				for(int i = 0; i < 5; i++){
					int aux = matrix[i][j];
					matrix[i][j]  = matrix[i][j - 1];
					matrix[i][j - 1] = aux;
				}
				moves++;
			}
		} else if(index.second < 2){
			for(int j = index.second; j != 2; j++){
				for(int i = 0; i < 5; i++){
					int aux = matrix[i][j];
					matrix[i][j]  = matrix[i][j + 1];
					matrix[i][j + 1] = aux;
				}
				moves++;
			}
		}
	}
	cout << moves << endl;

	return 0;
}
