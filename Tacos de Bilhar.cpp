#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
	set <int> estoque;
	int consultas, fabricados=0, i, temp;
	cin >> consultas;

	for(i=0; i<consultas; i++){
		cin >> temp;
		if(estoque.find(temp) == estoque.end()){
			estoque.insert(temp);
			fabricados+=2;
		}
		
		else{
			estoque.erase(temp);
		}
	}

	cout << fabricados << endl;

	return 0;
}

