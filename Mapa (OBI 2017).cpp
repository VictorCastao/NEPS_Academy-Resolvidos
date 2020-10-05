#include <iostream>

using namespace std;

int main(){
	int linhas, colunas, i, j, x_atual, y_atual, x_antigo, y_antigo;
	
	cin >> linhas >> colunas;

	char matriz[linhas][colunas];

	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			cin >> matriz[i][j];
			if(matriz[i][j] == 'o'){
				x_atual = i;
				y_atual = j;
				x_antigo = i;
				y_antigo = j;
			}
		}
	}

	while(true){
		if(x_atual-1 >= 0 and matriz[x_atual-1][y_atual] == 'H' and x_atual-1 != x_antigo){
			x_antigo = x_atual;
			y_antigo = y_atual;
			x_atual-=1;
		}

		else if(x_atual+1 < linhas and matriz[x_atual+1][y_atual] == 'H' and x_atual+1 != x_antigo){
			x_antigo = x_atual;
			y_antigo = y_atual;
			x_atual+=1;
		}

		else if(y_atual-1 >= 0 and matriz[x_atual][y_atual-1] == 'H' and y_atual-1 != y_antigo){
			x_antigo = x_atual;
			y_antigo = y_atual;
			y_atual-=1;
		}

		else if(y_atual+1 < colunas and matriz[x_atual][y_atual+1] == 'H' and y_atual+1 != y_antigo){
			x_antigo = x_atual;
			y_antigo = y_atual;
			y_atual+=1;
		}
	
		else break;
	}

	cout << x_atual+1 << " " << y_atual+1 << endl;
	
	return 0;
}

