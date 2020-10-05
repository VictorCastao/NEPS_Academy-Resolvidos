#include <iostream>
#include <cstdio>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
	int ilhas, operacoes;

	scanf("%d %d", &ilhas, &operacoes);
	
	deque <int> pontes[ilhas+1];

	int op, id1, id2, i;

	for(i=0; i<operacoes; i++){
		scanf("%d %d %d", &op, &id1, &id2);
		if(op == 1){
			pontes[id1].push_back(id2);
			pontes[id2].push_back(id1);
		}
		else{
			if(find(pontes[id1].begin(), pontes[id1].end(), id2) != pontes[id1].end()) printf("1\n");
			else printf("0\n");
		}
	}
	return 0;
}
 
