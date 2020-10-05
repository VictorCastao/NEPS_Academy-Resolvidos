#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	long long numero;

	scanf("%lli", &numero);

	long long bits = 0;

	while(numero != 0){
		bits++;
		numero -= numero & - numero;
	}

	printf("%lli\n", bits);

	return 0;
}
 
