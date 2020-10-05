#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int numeros, comida, i, j, temp, soma=0, diferentes = 0, somatudo=0;

	scanf("%d %d", &numeros, &comida);

	int sanduiche[numeros];

	for(i=0; i<numeros; i++){
		scanf("%d", &sanduiche[i]);
		somatudo += sanduiche[i];
	}

	for(i=0,j=0; i<numeros; ){
		if(somatudo < comida) break;
		while(soma < comida){
			soma+=sanduiche[j];
			j++;
			if(j==numeros) j=0;
		}
		if(soma == comida){
			diferentes++;
			soma-=sanduiche[i];
			i++;
		}
		else if(soma > comida){
			soma-=sanduiche[i];
			i++;
			j--;
			if(j == -1) j=numeros-1;
			soma-=sanduiche[j];
		}
	}

	printf("%d\n", diferentes);

	return 0;
}

