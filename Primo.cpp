#include <iostream>

using namespace std;

bool eh_primo(int x){
	int divisores = 1;
	for(int i=2; i<x; i++){
		if(x % i == 0){
			divisores++;
			break;
		}
	}
	if (divisores > 1 or x == 1){
		return false;
	}
	else {
		return true;
	}

}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
