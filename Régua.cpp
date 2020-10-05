#include <iostream>
#include <cstdio>


using namespace std;

int main(){
	int exigido, p1, p2;
	cin >> exigido;
	cin >> p1 >> p2;
	if(abs(p1-p2) >= exigido) cout << "EH SUFICIENTE\n";
	else cout << "NAO EH SUFICIENTE\n";
	return 0;
}
