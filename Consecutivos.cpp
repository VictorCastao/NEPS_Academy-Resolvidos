#include <iostream>

using namespace std;

int main() {
	int N, atual, anterior, consecutivos, maiorseq;

	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> atual;
		
		if(i == 0){
			anterior = atual;
			consecutivos = 1;
			maiorseq = 1;
			continue;		
		}
		
		if(anterior == atual){
			consecutivos++;
			
			if(consecutivos > maiorseq){
				maiorseq = consecutivos;
			}
		}

		else{
			consecutivos = 1;
		}
		
		anterior = atual;
	}

	cout << maiorseq << "\n";									

}
