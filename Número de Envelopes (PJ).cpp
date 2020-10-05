#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int menor, balas, temp;

	scanf("%d", &balas);

	for(int i=0; i<balas; i++){
		scanf("%d", &temp);
		if(i==0) menor = temp;
		else if(temp < menor) menor = temp;
	}

	printf("%d\n", menor);

	return 0;
}
