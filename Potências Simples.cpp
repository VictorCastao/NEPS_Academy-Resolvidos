#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x, y, resultado;
    cin >> x >> y;
    resultado = pow(x, y);
    cout.precision(4);
    cout.setf(ios::fixed);
    cout << resultado << "\n";
}
