#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int doces, qtdes[3];
	cin >> doces >> qtdes[0] >> qtdes[1] >> qtdes[2];
	sort(qtdes, qtdes+3);
	int valor = 0;
	for(int i=0; i<3; i++){
		if(doces - qtdes[i] >= 0){
			valor++;
			doces-=qtdes[i];
		}
	}
	printf("%d\n", valor);
}
