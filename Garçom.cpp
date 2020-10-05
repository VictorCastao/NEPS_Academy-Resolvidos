#include <iostream>

using namespace std;

int main(){
    int derrubados = 0, lata, copo, bandejas, inicio = 0;
   	cin >> bandejas;
    
    while(inicio < bandejas){
        cin >> lata >> copo;
        
        if (lata > copo){
        	    derrubados += copo;
        }
        
        inicio++;
    }
    
    cout << derrubados << "\n";

}
        
