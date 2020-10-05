#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main(){
	int pecas, i, temp, a=0, b=0, c=0;
	stack <int> estoque[5];
	scanf("%d", &pecas);
	for(i=0; i<pecas; i++){
		scanf("%d", &temp);
		estoque[temp-1].push(1);

		if(!estoque[0].empty() and !estoque[2].empty() and !estoque[4].empty()){
			estoque[0].pop();
			estoque[2].pop();
			estoque[4].pop();
			a++;
			} 

		else if(!estoque[0].empty() and !estoque[3].empty()){
			estoque[0].pop();
			estoque[3].pop();
			b++;
		}

		else if(!estoque[1].empty() and !estoque[3].empty()){
			estoque[1].pop();
			estoque[3].pop();
			c++;
		}
	}

	

	printf("A: %d\nB: %d\nC: %d\n", a, b, c);
  	
	return 0;
}

