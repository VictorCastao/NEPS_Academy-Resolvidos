#include <iostream>

using namespace std;

int main(){
	int estacoes, comandos, movimento, devastado, atual = 1;

	cin >> estacoes >> comandos >> devastado;

	int frequencimetro[estacoes];

	for (int j=0; j<estacoes; j++){
		frequencimetro[j] = 0;
	}

	frequencimetro[0] = 1;

	for (int i=0; i<comandos; i++){

		cin >> movimento;
		atual += movimento;

		if(atual < 1){
			atual = estacoes;
		}

		if(atual > estacoes){
			atual = 1;
		}

		frequencimetro[atual-1] += 1;

	}
	

	int resposta = frequencimetro[devastado-1];

	cout << resposta << endl;

}
