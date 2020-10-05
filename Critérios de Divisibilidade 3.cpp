#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	string numero;

	cin >> numero;

	int soma = 0;

	for (int i = numero.size()-1; i >= 0; i--){
		if(i % 2 == 0) soma += (int) numero[i] - '0';
		else soma += ((int) numero[i] - '0') * 10;

	} 

	if(soma % 11 == 0) cout << "S\n";

	else cout << "N\n";

	return 0;
}

