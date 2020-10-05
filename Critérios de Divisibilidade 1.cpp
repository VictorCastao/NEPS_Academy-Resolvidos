#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	string numero;
	cin >> numero;
	if(numero[numero.size()-1] == '0' or numero[numero.size()-1] == '2' or numero[numero.size()-1] == '4' or numero[numero.size()-1] == '6' or numero[numero.size()-1] == '8') cout << "S\n";
	else cout << "N\n";
	int soma = 0;
	for (int i=0; i<numero.size(); i++) soma += (int) numero[i] - (int) '0';
	if(soma % 3 == 0) cout << "S\n";
	else cout << "N\n";
	if(numero[numero.size()-1] == '5' or numero[numero.size()-1] == '0' ) cout << "S\n";
	else cout << "N\n";
	return 0;
}

