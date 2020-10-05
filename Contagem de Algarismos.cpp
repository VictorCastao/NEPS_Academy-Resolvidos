#include <iostream>

using namespace std;

int main(){
	int freq[10], qtde, tamanho;
	string numeroatual;

	for(int i = 0; i<10; i++){
		freq[i] = 0;
	}
	
	cin >> qtde;

	for(int j=0; j<qtde; j++){
		cin >> numeroatual;
		tamanho = numeroatual.size();

		for (int k=0; k<tamanho; k++){
			freq[(int) numeroatual[k] - 48]++;
		}

	}

	for (int l=0; l<10; l++){
		cout << l << " - " << freq[l] << endl;
	}

	return 0;
}
