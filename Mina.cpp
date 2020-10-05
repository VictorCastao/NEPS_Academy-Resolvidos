#include <iostream>
#include <bitset>
#include <queue>
#include <cstdio>


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
	int ordem, resp;
	scanf("%d", &ordem);
	int M[ordem][ordem];
	for(int i=0; i<ordem; i++){
		for(int j=0; j<ordem; j++){
			scanf("%d", &M[i][j]);
		}
	}

	bitset <100> visitado [100];
	for(int i=0; i<100; i++){
		for(int j=0; j<100; j++){
			visitado[i][j] = 0;
		}
	}
	int matriz[ordem][ordem];
	for(int i=0; i<ordem; i++){
		for(int j=0; j<ordem; j++){
			matriz[i][j] = 1000000;
		}
	}
	matriz[0][0] = 0;
	ponto temp;
	temp.peso = 0;
	temp.x = 0;
	temp.y = 0;
	priority_queue<ponto, vector<ponto>, Comp> fila;
	fila.push(temp);
	
	while(true){
		int f = -1;
		while(!fila.empty()){
			temp = fila.top();
			fila.pop();
			if(visitado[temp.x][temp.y]==0){
				f = 1;
				break;
			}
		}
		if(f==-1) break;
		ponto temp2;
		visitado[temp.x][temp.y] = 1;
		if(temp.x>0 and temp.peso + M[temp.x-1][temp.y] < matriz[temp.x-1][temp.y]){
			matriz[temp.x-1][temp.y] = temp.peso + M[temp.x-1][temp.y];
			temp2.peso = matriz[temp.x-1][temp.y];
			temp2.x = temp.x-1;
			temp2.y = temp.y;
			fila.push(temp2);
		}
		//x<ordem-1
		if(temp.x<ordem-1 and temp.peso + M[temp.x+1][temp.y] < matriz[temp.x+1][temp.y]){
			matriz[temp.x+1][temp.y] = temp.peso + M[temp.x+1][temp.y];
			temp2.peso = matriz[temp.x+1][temp.y];
			temp2.x = temp.x+1;
			temp2.y = temp.y;
			fila.push(temp2);
		}
		//y>0
		if(temp.y>0 and temp.peso + M[temp.x][temp.y-1] < matriz[temp.x][temp.y-1]){
			matriz[temp.x][temp.y-1] = temp.peso + M[temp.x][temp.y-1];
			temp2.peso = matriz[temp.x][temp.y-1];
			temp2.x = temp.x;
			temp2.y = temp.y-1;
			fila.push(temp2);
		}
		//y<ordem-1
		if(temp.y<ordem-1 and temp.peso + M[temp.x][temp.y+1] < matriz[temp.x][temp.y+1]){
			matriz[temp.x][temp.y+1] = temp.peso + M[temp.x][temp.y+1];
			temp2.peso = matriz[temp.x][temp.y+1];
			temp2.x = temp.x;
			temp2.y = temp.y+1;
			fila.push(temp2);
		}

	}

	resp = matriz[ordem-1][ordem-1];

	printf("%d\n", resp);

	return 0;
}

