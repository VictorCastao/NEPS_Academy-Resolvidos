#include <iostream>
#include <cstdio>
#include <queue>
#include <deque>

using namespace std;

struct Comp{
    bool operator()(const pair<int, int>& a, const pair<int, int>& b){
        return a.first>b.first;
    }
};

int main(){
	int pilares, pontes, p1, p2, peso;
	int i, j;
	pair <int, int> atual;
	scanf("%d %d", &pilares, &pontes);
	int distancia[pilares+2];
	int visitados[pilares+2];
	deque <pair<int, int>> arestas[pilares+2];
	for(i=0; i<pontes; i++){
		scanf("%d %d %d", &p1, &p2, &peso);
		arestas[p1].push_back(make_pair(peso, p2));
		arestas[p2].push_back(make_pair(peso, p1));
	}
	priority_queue< pair<int, int>, vector < pair <int, int> >, Comp > FILA; 
	for(i=0; i<pilares+2; i++){
		distancia[i] = 1000000000;
		visitados[i] = 0;
	}
	
	distancia[0] = 0;
	FILA.push(make_pair(0,0));
	while(true){
		int fim = 0;
		while(!FILA.empty()){
			atual = FILA.top();
			FILA.pop();
			if(visitados[atual.second] == 0){
				fim = 1;
				break;
			}
		}
		if(fim == 0) break;
		for(i=0; i<arestas[atual.second].size(); i++){
			if(distancia[arestas[atual.second][i].second] > arestas[atual.second][i].first + atual.first){
				distancia[arestas[atual.second][i].second] = arestas[atual.second][i].first + atual.first;
				FILA.push(make_pair(distancia[arestas[atual.second][i].second], arestas[atual.second][i].second));
			}
		}
		visitados[atual.second] = 1;
	}

	int resposta = distancia[pilares+1];

	printf("%d\n", resposta);

	return 0;
}
