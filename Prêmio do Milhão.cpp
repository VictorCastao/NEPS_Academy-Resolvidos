#include <iostream>

using namespace std;

int main(){
    int N, acessos, somaviews = 0, diapremio = 1;
    cin >> N;
    
    while(N > 0){
        cin >> acessos;
        somaviews += acessos;
        
        if(somaviews < 1000000){
            diapremio++;
        }
        
        N--;
    }
    
    cout << diapremio << "\n";
}
