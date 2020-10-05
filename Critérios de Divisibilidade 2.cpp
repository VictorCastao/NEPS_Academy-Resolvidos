#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	string numero;

	cin >> numero;

	if(numero.size() == 1 and ((int) numero[0] - (int) '0') % 4 == 0) cout << "S\n";

	else if(numero.size() > 1 and (((int) numero[numero.size()-1] - (int) '0') + (((int) numero[numero.size()-2] - (int) '0') * 2)) % 4 == 0) cout << "S\n";

	else cout << "N\n";

	int soma = 0;

	for (int i=0; i<numero.size(); i++) soma += (int) numero[i] - (int) '0';

	if(soma % 9 == 0) cout << "S\n";

	else cout << "N\n";

	if(numero.size() == 1 and numero[0] == '0') cout << "S\n";

	else if(numero.size() > 1 and (((int) numero[numero.size()-1] - (int) '0') + (((int) numero[numero.size()-2] - (int) '0') * 10)) % 25 == 0) cout << "S\n";

	else cout << "N\n";

	return 0;
}

