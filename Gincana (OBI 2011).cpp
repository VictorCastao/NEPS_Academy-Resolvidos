#include <iostream>
#include <cstdio>
#include <deque>

using namespace std;

deque <int> lista[1001];
int visitados[1001];

void busca_largura(int x){
	deque <int> fila;
	fila.push_back(x);
	while(!fila.empty()){
		int v = fila.front();
		fila.pop_front();
		if(visitados[v] == 1) continue;
		visitados[v] = 1;
		for(int i=0; i<lista[v].size(); i++){
			if(visitados[lista[v][i]]==0) fila.push_back(lista[v][i]);
		}
	}
}

 
int main(){
	int pessoas, linhas;
	scanf("%d %d", &pessoas, &linhas);
	int tipo1, tipo2;
	for(int i=0; i<linhas; i++){
		scanf("%d %d", &tipo1, &tipo2);
		lista[tipo1].push_back(tipo2);
		lista[tipo2].push_back(tipo1);
	}
	for(int i=1; i<=pessoas; i++){
		visitados[i] = 0;
	}
	int times = 0;
	for(int i=1; i<=pessoas; i++){
		if(visitados[i] == 0){
			times++;
			busca_largura(i);
		}

	}
	printf("%d\n", times);
	return 0;
}

