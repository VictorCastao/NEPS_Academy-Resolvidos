#include <iostream>
#include <cstdio>
#include <deque>
#include <queue>

using namespace std;

struct ponto{
	int peso, x, y;
};

struct Comp{
    bool operator()(const ponto& a, const ponto& b){
        return a.peso>b.peso;
    }
};
 
int main(){
	int colunas, linhas;
	scanf("%d %d", &linhas, &colunas);
	int matriz[linhas][colunas], menor[linhas][colunas], visitados[linhas][colunas];
	ponto origem, destino;
	for(int i=0; i<linhas; i++){
		for(int j=0; j<colunas; j++){
			scanf("%d", &matriz[i][j]);
			menor[i][j] = 10000000;
			visitados[i][j] = 0;
			if(matriz[i][j] == 2){
				origem.peso = 1;
				origem.x = i;
				origem.y = j;	
			}
			else if(matriz[i][j] == 3){
				destino.x = i;
				destino.y = j;
			}
		}

	}
	priority_queue<ponto, vector<ponto>, Comp> fila;
	fila.push(origem);
	ponto temp, temp2;
	while(true){
		int teste=0;
		while(!fila.empty()){
			temp = fila.top();
			fila.pop();
			if(visitados[temp.x][temp.y] == 0){
				teste = 1;
				break;
			}
		}
		if(teste==0 or (temp.x == destino.x and temp.y == destino.y)) break;
		visitados[temp.x][temp.y] = 1;
		if(temp.x > 0 and matriz[temp.x-1][temp.y] != 0){
			if(visitados[temp.x-1][temp.y] == 0 and temp.peso+1 < menor[temp.x-1][temp.y]){
				menor[temp.x-1][temp.y] = temp.peso+1;
				temp2.x = temp.x-1;
				temp2.y = temp.y;
				temp2.peso = temp.peso+1;
				fila.push(temp2);
			}
		}
		if(temp.x < linhas-1 and matriz[temp.x+1][temp.y] != 0){
			if(visitados[temp.x+1][temp.y] == 0 and temp.peso+1 < menor[temp.x+1][temp.y]){
				menor[temp.x+1][temp.y] = temp.peso+1;
				temp2.x = temp.x+1;
				temp2.y = temp.y;
				temp2.peso = temp.peso+1;
				fila.push(temp2);
			}
		}
		if(temp.y > 0 and matriz[temp.x][temp.y-1] != 0){
			if(visitados[temp.x][temp.y-1] == 0 and temp.peso+1 < menor[temp.x][temp.y-1]){
				menor[temp.x][temp.y-1] = temp.peso+1;
				temp2.x = temp.x;
				temp2.y = temp.y-1;
				temp2.peso = temp.peso+1;
				fila.push(temp2);
			}
		}
		if(temp.y < colunas-1 and matriz[temp.x][temp.y+1] != 0){
			if(visitados[temp.x][temp.y+1] == 0 and temp.peso+1 < menor[temp.x][temp.y+1]){
				menor[temp.x][temp.y+1] = temp.peso+1;
				temp2.x = temp.x;
				temp2.y = temp.y+1;
				temp2.peso = temp.peso+1;
				fila.push(temp2);
			}
		}
	}
	printf("%d\n", menor[destino.x][destino.y]);
	return 0;
}

