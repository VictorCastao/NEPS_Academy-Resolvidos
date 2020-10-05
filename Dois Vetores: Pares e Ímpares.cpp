#include <iostream>
#include <deque>
#include <cstdio>

using namespace std;

int main(){
	int temp;
	deque <int> pares, impares;

	for(int i=0; i<10; i++){
		scanf("%d", &temp);
		if(temp % 2 == 0) pares.push_back(temp);
		else impares.push_back(temp);
	}

	for(int i=0; i<pares.size(); i++){
		printf("%d ", pares[i]);
	}

	printf("\n");

	for(int j=0; j<impares.size(); j++){
		printf("%d ", impares[j]);
	}	

	printf("\n");
}
