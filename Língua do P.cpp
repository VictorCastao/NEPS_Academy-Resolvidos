#include <iostream>

using namespace std;

int main(){
	string frase;

	getline(cin, frase);

	int tamanho = frase.size(), marcador = 0;

	while(true){
		if(marcador >= tamanho){
			break;
		}
		else if(frase[marcador] == 'p'){
			cout << frase[marcador+1];
			marcador += 2;
		}
		else{
			cout << frase[marcador];
			marcador++;
		}
	}

	cout << endl;

	return 0;
}

