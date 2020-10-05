#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int moedas = 0, troco;
	scanf("%d", &troco);

	if(troco >= 100){
		moedas += (int) troco/100;
		troco %= 100;
	}

	if(troco >= 50){
		moedas += (int) troco/50;
		troco %= 50;
	}

	if(troco >= 25){
		moedas += (int) troco/25;
		troco %= 25;
	}

	if(troco >= 10){
		moedas += (int) troco/10;
		troco %= 10;
	}

	if(troco >= 5){
		moedas += (int) troco/5;
		troco %= 5;
	}

	moedas+=troco;

	printf("%d\n", moedas);

	return 0;
}
