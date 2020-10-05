#include <iostream>
#include <vector>

using namespace std;

int main(){
	int numero, i;

	cin >> numero;

	vector <int> binario;

	if(numero == 0){
		cout << "0\n";
	}

	else{

		while(numero != 0){
			binario.push_back(numero%2);		
			numero /= 2;
		}

		for(i = binario.size() - 1; i >= 0; i--){
			cout << binario[i];
		}

		cout << endl;	
	}

	return 0;
}
