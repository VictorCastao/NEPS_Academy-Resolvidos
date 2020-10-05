#include <iostream>

using namespace std;

long long Hanoi(int x, long long mov){
	if (x == 1){
	mov++;
    	return mov;
    }
    else{
    	mov = mov + (2 * Hanoi(x-1, 0));
	mov++;
	return mov;
    }
}

int main(){
	int N, teste = 1;
	while (true){
    		cin >> N;
		if (N == 0){
			break;
		}
		cout << "Teste " << teste << endl << Hanoi(N, 0) << endl << endl;
		teste++;
	}
	return 0;
}
