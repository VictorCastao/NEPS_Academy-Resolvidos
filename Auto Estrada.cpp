#include <iostream>

using namespace std;

int main(){
	string blocos;

	int qtde;
	
	cin >> qtde;

	cin >> blocos;

	int i, placas = 0;

	for(i=0; i<qtde; i++){
		if(blocos[i] == 'P'){
			placas += 2;
		}
		else if (blocos[i] == 'C'){
			placas += 2;
		}
		else if (blocos[i] == 'A'){
			placas++;
		}
		else if (blocos[i] == 'D'){
			continue;
		}
	} 

	cout << placas << endl;

	return 0;
}

