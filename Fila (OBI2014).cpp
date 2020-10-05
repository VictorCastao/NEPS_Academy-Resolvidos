#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){
	vector <int> fila;
	vector<int>::iterator pos;

	int pessoas, saiu, temp, i;

	scanf("%d", &pessoas);

	for(i=0; i<pessoas; i++){
		scanf("%d", &temp);
		fila.push_back(temp);
	}

	scanf("%d", &saiu);

	for(i=0; i<saiu; i++){
		scanf("%d", &temp);

		for(pos = fila.begin(); pos != fila.end(); pos++){

			if(*pos == temp){
				fila.erase(pos);
				pos--;
				break;
			}

		}

	}

	for(i=0; i<fila.size(); i++){
		cout << fila[i] << " ";
	}

	cout << "\n";
		
	return 0;
}
