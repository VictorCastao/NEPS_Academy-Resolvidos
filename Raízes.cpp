#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, i;
    float X, raiz;
    cin >> N;
    
    for(i = 0; i < N; i++){
        cin >> X;
        raiz = sqrt(X);
        cout.precision(4);
        cout.setf(ios::fixed);
        cout << raiz << "\n";
    }
}
