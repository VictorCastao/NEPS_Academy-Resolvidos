#include <iostream>
#include <cstdio>

using namespace std;
int MDC(int a, int b){
	if(b == 0) return a;
	else return MDC(b, a%b);
}

int main(){
	int qtde, i;
	scanf("%d", &qtde);
	int numeros[qtde];
	for(i=0; i<qtde; i++){
		scanf("%d", &numeros[i]);
	}
	int divisor = 0;
	for(i=1; i<qtde; i++){
		if(i==1) divisor = MDC(numeros[i], numeros[i-1]);
		else divisor = MDC(numeros[i], divisor);
		if(divisor == 1) break;
	}
	printf("%d\n", divisor);
	return 0;
}
