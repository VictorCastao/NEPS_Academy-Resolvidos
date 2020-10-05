#include <iostream>
#include <vector>

using namespace std;

int main(){
	int tamanho, numero, contadorde100 = 0;
	
	cin >> tamanho;

	vector <int> sequencia;

	for(int i=0 ; i < tamanho; i++){
		cin >> numero;
		sequencia.push_back(numero);
	}

	for(int j = 0; j < (tamanho-2); j++){
		if(sequencia[j] == 1 and sequencia[j+1] == 0 and sequencia[j+2] == 0){
			contadorde100++;
			j += 2;
		}
	}
	
	cout << contadorde100 << "\n"; 
}
