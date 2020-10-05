#include <iostream>

using namespace std;

int main(){
	int tamanho, numero, bombas, i, j, k;
	
	cin >> tamanho;

	int vetor[tamanho+2], resultado[tamanho];
	
	vetor[0] = 0;
	vetor[tamanho-1] = 0;
	
	for(i=1 ; i<tamanho+1; i++){
		cin >> numero;
		vetor[i] = numero;
	}

	for(j=1; j<(tamanho+1); j++){
		bombas = 0;
		
		if (vetor[j-1] == 1){
			bombas++;		
		}
		
		if (vetor[j] == 1){
			bombas++;		
		}

		if (vetor[j+1] == 1){
			bombas++;
		}
		
		resultado[j-1] = bombas;
	}
	
	for(k=0; k<tamanho; k++){
		cout << resultado[k] << "\n";	
	}
}
