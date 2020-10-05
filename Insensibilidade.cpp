#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int x0, x1, y0, y1, i, linhas;

	long long insensibilidade=0;

	scanf("%d", &linhas);

	for(i=0; i<linhas; i++){
		scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
		insensibilidade += ((x1-x0) * (x1-x0)) + ((y1-y0) * (y1-y0));
	}

	printf("%lli\n", insensibilidade);
 
	return 0;
}
 
