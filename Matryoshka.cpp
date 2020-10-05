#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int N;

	cin >> N;

	int vetor[N], auxiliar[N], marcador = 0, qtde = 0, i, foradeordem[N];

	for(i=0; i<N; i++){
		cin >> vetor[i];
		auxiliar[i] = vetor[i];
		foradeordem[i] = -1;
	}

	sort(auxiliar, auxiliar+N);

	for(i=0; i<N; i++){
		if(vetor[i] != auxiliar[i]){
			qtde++;
			foradeordem[marcador] = vetor[i];
			marcador++;
		}
	}

	sort(foradeordem, foradeordem+N);

	cout << qtde << endl;

	for(i=N-qtde; i<N; i++){
		cout << foradeordem[i] << " ";
	}

	cout << endl; 
    	
	return 0;
}
