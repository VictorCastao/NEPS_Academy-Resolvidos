#include <iostream>

using namespace std;

int main() {

	int N, esquerda, direita, menordistancia, marcadordir, marcadoresq;
	cin >> N;
	int fita[N], cores[N], primeiro = 0, ultimo = N-1;

	for (int i=0; i<N; i++) {
		cin >> fita[i];
	}

	while (fita[primeiro] != 0){
		primeiro++;
	}
	
	while (fita[ultimo] != 0) {
		ultimo--;
	}
	
	for (int j=0; j<N; j++) {

		if (fita[j] == 0) {
			cores[j] = 0;
			continue;		
		}

		esquerda = 0;
		direita = 0;
		marcadordir = j;
		marcadoresq = j;
		
		while (fita[marcadordir] != 0 and direita < 9 and marcadordir < N) {
			direita++;
			marcadordir++;
		}

		while (fita[marcadoresq] != 0 and marcadoresq >= 0 and esquerda < 9) {
			esquerda++;
			marcadoresq--;
		}

		if (j > ultimo){
			menordistancia = esquerda;
		}
		
		else if (j < primeiro) {
			menordistancia = direita;
		}

		else if (direita < esquerda) {
			menordistancia = direita;
		}

		else {
			menordistancia = esquerda;
		}

		cores[j] = menordistancia;
	
	}

	for (int m=0; m<N; m++) {
		cout << cores[m];
		
		if (m != N-1) {
			cout << " ";
		}
	}

	cout << "\n";	 

}
