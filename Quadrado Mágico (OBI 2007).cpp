#include <iostream>

using namespace std;

int main() {
	int N, i, j, somacoluna = 0, somalinha = 0, somadiagonal1 = 0, somadiagonal2 = 0, resultado = 0;
	cin >> N;	
	int matriz[N][N];

	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			cin >> matriz[i][j];	
		} 
	}
	//Linha
	for(i=0; i<N; i++){
		int soma1 = 0;
		for(j=0; j<N; j++){
			soma1 += matriz[i][j];	
		}

		if (i != 0 and soma1 != somalinha) {
			somalinha = -1;
			break; 
		}
		
		else {
			somalinha = soma1;
		}
	}
	//Coluna
	if (somalinha != -1){
		
		for(i=0; i<N; i++){
			int soma2 = 0;
			for(j=0; j<N; j++) {
				soma2 += matriz[j][i];
			}

			if(i != 0 and soma2 != somacoluna) {			
				somacoluna = -1;
				break;
			}

			else {
				somacoluna = soma2;
			}
		}
	}
	//Diagonal
	if (somalinha != -1 and somacoluna != -1) {	
		for(i=0; i<N; i++){
			for(j=0; j<N; j++) {

				if (i == j) {
					somadiagonal1 += matriz[i][j];
				}

				if (j == (N-1-i)){
					somadiagonal2 += matriz[i][j];
				}						
			}
		}
	}
		
	if (somadiagonal1 == somadiagonal2 and somalinha == somacoluna and somacoluna == somadiagonal1) {
		resultado = somalinha;
	}
		
	else {
		resultado = -1;
	}
	
	cout << resultado << endl;
}
