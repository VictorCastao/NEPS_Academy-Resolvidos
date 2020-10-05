#include <iostream>
#include <cstdio>
#include <deque>

using namespace std;

int main(){
	int aeroportos, voos, teste = 1, tamanho = 0, origem, destino;
	
	while(true){

		scanf("%d %d", &aeroportos, &voos);
		
		if(aeroportos == 0 and voos == 0) break;

		tamanho = 0;

		bool r = true;

		deque <int> grafo[aeroportos+1];

		for(int i=0; i<voos; i++){
			scanf("%d %d", &origem, &destino);
			grafo[origem].push_back(destino);
			if(grafo[origem].size() > tamanho) tamanho = grafo[origem].size();
			grafo[destino].push_back(origem);
			if(grafo[destino].size() > tamanho) tamanho = grafo[destino].size();
		}

		if(teste != 1) printf("\n");

		printf("Teste %d\n", teste);

		for(int j=1; j<=aeroportos; j++){
			if(grafo[j].size() == tamanho){
				if(r) r = false;
				else printf(" ");
				printf("%d", j);
			}
		}

		printf("\n");
	
		teste++;
		
	}

	return 0;
}
 
