#include <iostream>
#include <algorithm>

using namespace std;

struct pais{
	int id;
	int ouro = 0;
	int prata = 0;
	int bronze = 0;
};


bool comparacao(pais a, pais b){
	if(a.ouro != b.ouro){
		return a.ouro > b.ouro;
	}
	else if(a.prata != b.prata){
		return a.prata > b.prata;
	}
	else if(a.bronze != b.bronze){
		return a.bronze > b.bronze;
	}
	else{
		return a.id < b.id;
	}
}

int main(){
	int i, paises, modalidades, ouro, prata, bronze;

	cin >> paises >> modalidades;

	pais v[paises];

	for(i=0; i<paises; i++){
		v[i].id = i+1;
	}

	for(i=0; i<modalidades; i++){
		cin >> ouro >> prata >> bronze;
		v[ouro-1].ouro++;
		v[prata-1].prata++;
		v[bronze-1].bronze++;
	}

	sort(v, v+paises, comparacao);

	for(i=0; i<paises; i++){
		cout << v[i].id << " ";
	}
	
	cout << endl;

	return 0;
}

