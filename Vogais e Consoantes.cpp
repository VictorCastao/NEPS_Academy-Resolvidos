#include <iostream>
#include <deque>
#include <cstdio>

using namespace std;

int main(){
	string temp;
	deque <char> vog, cons;
	cin >> temp;
	for(int i=0; i<temp.size(); i++){
		if(temp[i] == 'a' or temp[i] == 'e' or temp[i] == 'i' or temp[i] == 'o' or temp[i] == 'u') vog.push_back(temp[i]);
		else cons.push_back(temp[i]);
	}

	printf("Vogais: ");

	for(int i=0; i<vog.size(); i++){
		printf("%c", vog[i]);
	}

	printf("\nConsoantes: ");

	for(int j=0; j<cons.size(); j++){
		printf("%c", cons[j]);
	}	

	printf("\n");
}
