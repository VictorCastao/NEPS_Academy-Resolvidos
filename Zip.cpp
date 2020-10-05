#include <iostream>

using namespace std;

int main(){
	int c1, c2, c3, c4, s1 = 0, s2 = 0;

	cin >> c1 >> c2 >> c3 >> c4;

	if(c1 == c2) s1 = (c1+c2) * 2;
	else if(c1 == (c2+1) or c1 == (c2-1)) s1 = (c1+c2) * 3;
	else s1 = c1+c2;

	if(c3 == c4) s2 = (c3+c4) * 2;
	else if(c3 == (c4+1) or c3 == (c4-1)) s2 = (c3+c4) * 3;
	else s2 = c3+c4;

	if(s1 > s2) cout << "Lia\n";
	else if(s2 > s1) cout << "Carolina\n";
	else cout << "empate\n";

	return 0;
}
