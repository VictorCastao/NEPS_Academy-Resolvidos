#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	bool teste = false;
	int n, i;
	cin >> n;
	if(n==2) printf("2");
	else{
		for(int j = 2; j <= n; j++){
			bool resp = true;
			for(i = 2; i*i <= j; i++){
				if(j % i == 0){
					resp = false;
					break;
				}
			}
			if (!teste and resp){
				printf("%d", j);
				teste = true;
			}
			else if(teste and resp) printf(" %d", j);
		}
	}

	cout << endl;

	return 0;
}

