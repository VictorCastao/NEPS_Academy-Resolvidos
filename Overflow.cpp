#include <iostream>

using namespace std;

int main(){
	char op;
	int a, b, resp, limite;
	cin >> limite;
	cin >> a >> op >> b;
	if (op == '+'){
		resp = a+b;
	}

	if (op == '*'){
		resp = a*b;
	}

	if (resp > limite){
		cout << "OVERFLOW" << endl;
	}
	else{
		cout << "OK" << endl;
	}

	return 0;
}
