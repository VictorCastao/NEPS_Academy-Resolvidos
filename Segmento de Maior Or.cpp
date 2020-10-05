#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main(){
	int i,j,k,a,b, numeros;

	scanf("%d", &numeros);

	deque <int> valores;

	for(i=0; i<numeros; i++){
		scanf("%d", &k);
		valores.push_back(k);
	}

	int temp;

	a = valores[0];

	for(j=0; j<numeros; j++){
		b = valores[j];
		temp = a | b;
		a = temp;
	}

	printf("%d\n", temp);

	return 0;
}
 
