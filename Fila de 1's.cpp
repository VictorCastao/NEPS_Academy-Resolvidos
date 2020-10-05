#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	long long numero;

	scanf("%lli", &numero);

	if((numero & (numero+1)) == 0 and numero != 0) printf("S\n");
	
	else printf("N\n");

	return 0;
}
 
