#include <iostream>

using namespace std;

int main(){
	string risada, natural = "", inversa = "";

	cin >> risada;

	int tamanho = risada.size();

	for(int i=0 ; i<tamanho; i++){
		char l = risada[i];

		if(l == 'a' or l == 'e' or l == 'i' or l == 'o' or l == 'u'){
			natural += l;
		}
	}
	
	for(int j=tamanho-1 ; j>=0 ; j--){
		char p = risada[j];

		if(p == 'a' or p == 'e' or p == 'i' or p == 'o' or p == 'u'){
			inversa += p;
		}
	}

	if (natural == inversa){
		cout << 'S' << "\n";
	}
	else {
		cout << 'N' << "\n";
	}

	return 0;
}
