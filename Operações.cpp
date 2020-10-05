#include <iostream>

using namespace std;

int main(){
	char op;
	double a, b, resp;
	cin >> op;
	cin >> a >> b;
	if (op == 'M'){
		resp = a*b;
	}

	if (op == 'D'){
		resp = a/b;
	}

	cout.precision(2);
	cout.setf(ios::fixed);
	cout << resp << endl;

	return 0;
}
