#include <iostream>

using namespace std;

int main(){
	int qtde, i;
	
	cin >> qtde;

	int numero[qtde];

	int troquei = 0;

	for(i=0; i<qtde; i++){
		cin >> numero[i];
	}

	for(i=0; i<qtde; i++){
		if((numero[i] == 0 or numero[i] == 5) and numero[qtde-1] > numero[i]){
			int temp = numero[i];
			numero[i] = numero[qtde-1];
			numero[qtde-1] = temp;
			troquei = 1;
			break;
		}  
	}

	if(troquei == 0){
		for(i=qtde-2; i>=0; i--){
			if(numero[i] == 0 or numero[i] == 5){
			int temp = numero[i];
			numero[i] = numero[qtde-1];
			numero[qtde-1] = temp;
			troquei = 1;
			break;
			}
		}  
	}

	if (troquei == 0){
		cout << "-1\n";
	}

	else{
		for(i=0; i<qtde; i++){
			cout << numero[i];
			if(i != qtde-1){
				cout << " ";
			}
		}

		cout << endl;
	}
	
	return 0;
}

