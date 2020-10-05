#include <iostream>

using namespace std;

int main() {
    int N, A = 0, B = 0, acao;
    
    cin >> N;
    
    for(int i=0; i<N; i++) {
        cin >> acao;
        
        if (acao == 1) {
            A -= 1;
            A *= -1;
        }
        else {
            A -= 1;
            A *= -1;
            B -= 1;
            B *= -1;
        }
    }
	
    cout << A << "\n" << B << "\n";

}
