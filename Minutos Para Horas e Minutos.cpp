#include <iostream>

using namespace std;

int main(){
	int M;
	cin >> M;
	int horas = M / 60, minutos = M % 60;
	cout << horas << endl << minutos << endl;
}
