#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int pecas, temp;

	cin >> pecas;

	int valores[pecas+1];

	for(int i=1; i<=pecas; i++) valores[i] = 0;

	for(int j=1; j<pecas; j++){
		scanf("%d", &temp);
		valores[temp] = 1;
	}

	int resp = 0;

	for(int k=1; k<=pecas; k++){
		if(valores[k] == 0){
			resp = k;
			break;
		}
	}

	printf("%d\n", resp);

	return 0;
}
