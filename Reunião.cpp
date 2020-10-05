#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int cidades, estradas, i, j, k, p1, p2, dist;

	scanf("%d %d", &cidades, &estradas);

	int matriz[cidades][cidades];

	for(i=0; i<cidades; i++){
		for(j=0; j<cidades; j++){
			if(i==j) matriz[i][j] = 0;
			else matriz[i][j] = 10000000;
		}
	}

	for(i=0; i<estradas; i++){
		scanf("%d %d %d", &p1, &p2, &dist);
		matriz[p1][p2] = min(matriz[p1][p2], dist);
		matriz[p2][p1] = matriz[p1][p2];
	}

	for(i=0; i<cidades; i++){
		for(j=0; j<cidades; j++){
			for(k=0; k<cidades; k++){
				matriz[j][k] = min(matriz[j][k], matriz[j][i] + matriz[i][k]);
			}
		}
	}

	int maior_coluna, menor;

	for(j=0; j<cidades; j++){
		for(i=0; i<cidades; i++){
			if(i==0 or matriz[i][j] > maior_coluna) maior_coluna = matriz[i][j];
		}
		if(j==0 or maior_coluna < menor) menor = maior_coluna;
	}

	printf("%d\n", menor);

	return 0;
}
