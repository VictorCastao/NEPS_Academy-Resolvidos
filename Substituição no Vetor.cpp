#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	vector <int> numeros;

	vector <int> ocorrencias;
	
	int i, menor, temp;

	for(i=0; i<10; i++){
		cin >> temp;
		
		numeros.push_back(temp);

		if (i == 0) menor = temp;

		else if (temp < menor) menor = temp;
	}

	cout << "Menor: " << menor << endl;

	cout << "Ocorrencias: ";

	for(i=0; i<10; i++){
		if (numeros[i] == menor){
			cout << i << " ";
			numeros[i] = -1;
		}
	}

	cout << endl;

	for(i=0; i<10; i++){
		cout << numeros[i] << " ";
	}

	cout << endl;	
		
	return 0;
}
