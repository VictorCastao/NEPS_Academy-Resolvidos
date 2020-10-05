#include <iostream>

using namespace std;

string title(string F){
	string aux = F;
	int tam = aux.size();
	for(int i=0; i<tam; i++){
		if(i==0 and aux[i] >= 'a' and aux[i] <= 'z'){
			int dif = (int) 'A' - (int) 'a';
			aux[i] = (char) aux[i] + dif;
		}
		else if(aux[i] == ' '){
			continue;
		}
		else if(aux[i-1] == ' ' and aux[i] >= 'a' and aux[i] <= 'z'){
			int dif = (int) 'A' - (int) 'a';
			aux[i] = (char) aux[i] + dif;
		}
		else if(aux[i] >= 'A' and aux[i] <= 'Z' and i != 0 and aux[i-1] != ' '){
			int dif = (int) 'a' - (int) 'A';
			aux[i] = (char) aux[i] + dif;
		}
	}
	return aux;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
