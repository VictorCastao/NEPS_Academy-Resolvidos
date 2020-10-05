#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int area1 = a*b;
    int area2 = c*d;
    if(area1 > area2){
        cout << area1 << endl;
    }
    
    else{
        cout << area2 << endl;
    }
}
