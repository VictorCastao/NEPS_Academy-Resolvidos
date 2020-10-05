#include <iostream>
#include <cstdio>
#include <set>

using namespace std;

int main(){
	int numero, i, quantidade_divisores = 0, soma_divisores = 0;

	set <int> divisores;

	scanf("%d", &numero);

	for(i=1; i<=numero; i++){
		if(numero % i == 0){
			divisores.insert(i);
			soma_divisores += i;
			quantidade_divisores++;
		}
	}

	printf("%d divisor(es):", quantidade_divisores);

	for(auto it = divisores.begin(); it != divisores.end(); ++it){
		printf(" %d", *it);
	}

	printf("\nSoma de divisores = %d\n", soma_divisores);

	if(quantidade_divisores == 2) printf("Primo\n");

	else printf("Nao primo\n");

	return 0;
}

