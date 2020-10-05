#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool cmp (int a, int b){
	return a>b;
}

int main(){
	int l, a, p, r;
	cin >> l >> a >> p >> r;
	int valores[3];
	valores[0] = l;
	valores[1] = a;
	valores[2] = p;
	sort(valores, valores+3, cmp);
	float diagonal = pow(valores[0] * valores[0] + valores[1] * valores[1], 0.5);
	if(diagonal >= 2*r){
		cout << "N\n";
	}
	else{
		cout << "S\n";
	}
	
	return 0;
}
