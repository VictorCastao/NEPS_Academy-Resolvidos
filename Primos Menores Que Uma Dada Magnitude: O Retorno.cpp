#include <iostream>
#include <cstdio>
#include <bitset>

using namespace std;

int main(){
	bool teste = false;
	int n, i, mult, temp;
	cin >> n;
	bitset <10000002> valores(0);
	valores[0] = 1;
	valores[1] = 1;
	if(n == 2) printf("2");
	else{
		for(i=2; i<=n; i++){
			if(valores[i] != 1){
				if(!teste){
					cout << i;
					teste = true;
				}
				else printf(" %d", i);
				temp = i*2;
				while(temp <= n){
					valores[temp] = 1;
					temp+=i;
				}
			}
		}
	}

	cout << endl;

	return 0;
}

