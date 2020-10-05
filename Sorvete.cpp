#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int comprimento, sorveteiros, j, i, comeco = 0;

	cin >> comprimento >> sorveteiros;

	int rotas[comprimento+2];

	int a, b;

	for(i=0; i<=comprimento+1; i++){
		rotas[i] = 0;
	}

	for(i=0; i<sorveteiros; i++){
		cin >> a >> b;
		for(j=a; j<b; j++){
			rotas[j] = 1;
		}
		if(rotas[b] == 0) rotas[b] = -1;
	}

	for(i=0; i<=comprimento+1; i++){
		if(comeco == 0 and rotas[i] == 1){
			cout << i << " ";
			comeco = 1;
		}
		if(comeco == 1 and rotas[i] == -1){
			cout << i << endl;
			comeco = 0;
		}
	}

	return 0;

}
