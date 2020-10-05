#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque <int> moedas = {100, 50, 25, 10, 5, 1}, qtde = {0, 0, 0, 0, 0, 0};
    
    int total = 0, troco, temp;
    
    cin >> troco;
    
    for(int i=0; i<6; i++){
        qtde[i] = (troco - (troco % moedas[i])) / moedas[i];
        total += qtde[i];
        troco %= moedas[i];
    }
    
    cout << total << endl;
    
    for(int j=0; j<6; j++){
        cout << qtde[j] << endl;
    }

    return 0;
}

