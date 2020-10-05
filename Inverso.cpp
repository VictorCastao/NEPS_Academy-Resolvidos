#include <iostream>
#include <vector>

using namespace std;

int main(){
    int temp, i;
    vector<int> numeros;
    for(i=0; i<10; i++){
    	cin >> temp;
        numeros.push_back(temp);
    }
    for(i=9; i>=0; i--){
    	cout << numeros[i] << endl;
    }
	return 0;
}
