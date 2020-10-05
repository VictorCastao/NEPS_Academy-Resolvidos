#include <iostream>
#include <string>

using namespace std;

int main(){
	int linha, coluna, maiorsoma, soma1, soma2, i, j;
	cin >> linha >> coluna;
	int matriz[linha][coluna], somalinha[linha], somacoluna[coluna];
	for(i=0 ; i<linha ; i++){
		for(j=0; j<coluna; j++){
			cin >> matriz[i][j];	
		}
	}

	for(i=0; i<linha; i++){
		soma1 = 0;
		for(j=0; j<coluna; j++){
			soma1 += matriz[i][j];
		}
		somalinha[i] = soma1;
	}
	
	for(i=0; i<coluna; i++){
		soma2 = 0;
		for(j=0; j<linha; j++){
			soma2 += matriz[j][i];
		}
		somacoluna[i] = soma2;
	}

	int maiorlinha = 0, maiorcoluna = 0;
	
	for(i=0; i<linha; i++){
		if(somalinha[i] > maiorlinha){
			maiorlinha = somalinha[i];
		}
	}

	for(i=0; i<coluna; i++){
		if(somacoluna[i] > maiorcoluna){
			maiorcoluna = somacoluna[i];
		}
	}

	int resultado;
	
	if(maiorlinha > maiorcoluna){
		resultado = maiorlinha;
	}

	else{
		resultado = maiorcoluna;
	}

	cout << resultado << endl;

}

