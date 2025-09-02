#include <iostream>
using namespace std;
 
int main(){
    long long n, input, soma = 0;
    cin >> n;
    for(int i = 1; i < n; i++){
        cin >> input;
        soma += input;
    }
    cout << (n * (n + 1)) / 2 - soma << endl;
 
    return 0;
}
