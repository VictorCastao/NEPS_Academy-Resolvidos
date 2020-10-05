#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main(){
	set <int> cartas1;
	vector <int> dif1;
	set <int> cartas2;
	vector <int> dif2;
	int qtde1, qtde2, i, temp;
	cin >> qtde1 >> qtde2;

	for(i=0; i<qtde1; i++){
		cin >> temp;
		cartas1.insert(temp);
	}

	for(i=0; i<qtde2; i++){
		cin >> temp;
		cartas2.insert(temp);
	}

	set_difference(cartas1.begin(), cartas1.end(), cartas2.begin(), cartas2.end(), back_inserter(dif1));

	set_difference(cartas2.begin(), cartas2.end(), cartas1.begin(), cartas1.end(), back_inserter(dif2));

	if(dif1.size() <= dif2.size()) cout << dif1.size() << endl;

	else cout << dif2.size() << endl;

	return 0;
}

