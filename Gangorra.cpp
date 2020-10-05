#include <iostream>
using namespace std;
int main(){
    int p1, c1, p2, c2, pesq, pdir;
    cin >> p1 >> c1 >> p2 >> c2;
    pesq = p1 * c1;
    pdir = p2 * c2;
    if (pesq == pdir){
        cout << "0\n";
    }
    else if (pesq > pdir){
        cout << "-1\n";
    }
    else {
        cout << "1\n";
    }
}
    
