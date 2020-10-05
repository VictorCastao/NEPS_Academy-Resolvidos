#include <iostream>

using namespace std;

int main(){
	int N, torre = 0, i, j, soma = 0, soma1 = 0, soma2 = 0;
	
	cin >> N;

	int somalinhas[N], somacolunas[N], matriz[N][N];

	for(i=0; i<N; i++){
	
		for(j=0; j<N; j++){
			cin >> matriz[i][j];
		}
	}

	for(i=0; i<N; i++){
		soma1 = 0;
		soma2 = 0;
			
		for(j=0; j<N; j++){
			soma1 += matriz[i][j];
			soma2 += matriz[j][i];			
		}
	
		somalinhas[i] = soma1;
		somacolunas[i] = soma2;
	}

	for(i=0; i<N; i++){
		
		for(j=0; j<N; j++){
			soma = somalinhas[i] + somacolunas[j] - (matriz[i][j] * 2);
			
			if(soma > torre){
				torre = soma;
			}
		}
	}

	cout << torre << endl;

}
