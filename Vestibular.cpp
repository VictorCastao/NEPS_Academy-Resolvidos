#include <iostream>

using namespace std;

int main(){
	int acertos = 0, questoes;
	string gabarito, respostas;
	cin >> questoes;
	cin >> gabarito;
	cin >> respostas;
	
	for (int i = 0; i<questoes; i++){
		if(gabarito[i] == respostas[i]){
			acertos++;
		}
	}

	cout << acertos << endl;

	return 0;
}
