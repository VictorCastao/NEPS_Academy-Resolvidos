#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int salas, corredores, i, j, k, p1, p2, dist;

	scanf("%d %d", &salas, &corredores);

	int matriz[salas+1][salas+1];

	for(i=1; i<=salas; i++){
		for(j=1; j<=salas; j++){
			if(i==j) matriz[i][j] = 0;
			else matriz[i][j] = 1000000000;
		}
	}

	for(i=0; i<corredores; i++){
		scanf("%d %d %d", &p1, &p2, &dist);
		matriz[p1][p2] = min(matriz[p1][p2], dist);
		matriz[p2][p1] = matriz[p1][p2];
	}

	for(i=1; i<=salas; i++){
		for(j=1; j<=salas; j++){
			for(k=1; k<=salas; k++){
				matriz[j][k] = min(matriz[j][k], matriz[j][i] + matriz[i][k]);
			}
		}
	}

	int maior_coluna, menor;

	for(j=1; j<=salas; j++){
		for(i=1; i<=salas; i++){
			if(i==1 or matriz[i][j] > maior_coluna) maior_coluna = matriz[i][j];
		}
		if(j==1 or maior_coluna < menor) menor = maior_coluna;
	}

	printf("%d\n", menor);

	return 0;
}
