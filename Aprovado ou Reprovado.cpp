#include <iostream>
using namespace std;
int main(){
    float nota1, nota2;
    cin >> nota1 >> nota2;
    float media = (nota1+nota2)/2;
    if (media >= 7){
        cout << "Aprovado\n";
    }
    else if (media >= 4){
        cout << "Recuperacao";
    }
    else{
        cout << "Reprovado";
    }
}
        
