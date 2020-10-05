#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack <char> expressao;
	string temp;
	int i, j, linhas, erro=0;
	cin >> linhas;
	for(i=0; i<=linhas; i++){
		getline(cin, temp);	
		for(j=0; j<temp.size(); j++){
			if(temp[j] != '{' and temp[j] != '}') continue;
 
			else if(temp[j] == '{') expressao.push(temp[j]);

			else if(!expressao.empty() and temp[j] == '}' and expressao.top() == '{') expressao.pop();

			else erro = 1;
		}
	}
	
	if(expressao.empty() and erro == 0) cout << 'S' << endl;

	else{
		cout << 'N' << endl;
		for(;!expressao.empty();){
			expressao.pop();
		}
	}

	return 0;
}

