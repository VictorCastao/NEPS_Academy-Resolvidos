#include <iostream>

using namespace std;

int main(){
	string telefone;

	cin >> telefone;

	int i, tamanho = telefone.size();

	for(i=0; i<tamanho; i++){
		if((telefone[i] >= '0' and telefone[i] <= '9') or telefone[i] == '-'){
			cout << telefone[i];
		}
		else if (telefone[i] >= 'A' and telefone[i] <= 'C'){
			cout << '2';
		}
		else if (telefone[i] >= 'D' and telefone[i] <= 'F'){
			cout << '3';
		}
		else if (telefone[i] >= 'G' and telefone[i] <= 'I'){
			cout << '4';
		}
		else if (telefone[i] >= 'J' and telefone[i] <= 'L'){
			cout << '5';
		}
		else if (telefone[i] >= 'M' and telefone[i] <= 'O'){
			cout << '6';
		}
		else if (telefone[i] >= 'P' and telefone[i] <= 'S'){
			cout << '7';
		}
		else if (telefone[i] >= 'T' and telefone[i] <= 'V'){
			cout << '8';
		}
		else if (telefone[i] >= 'W' and telefone[i] <= 'Z'){
			cout << '9';
		}
	} 

	cout << endl;

	return 0;
}

