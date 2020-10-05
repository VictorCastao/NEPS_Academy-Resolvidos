#include <iostream>
#include <algorithm>

using namespace std;

struct PILOTO{
	int id;
	int pontos = 0;
};

bool ordem(PILOTO a, PILOTO b){
	if (a.pontos != b.pontos) return a.pontos > b.pontos;
	else return a.id < b.id;
}


int main(){ 
	int gp, qtde;

	while (true){

		cin >> gp >> qtde;

		if(gp == 0 and qtde == 0) break;

		PILOTO pilotos[qtde];

		for(int i=0; i<qtde; i++){

			pilotos[i].id = i+1;

		}

		int classificacao[gp][qtde];

		for(int j=0; j<gp; j++){
		
			for(int k=0; k<qtde; k++){
				
				cin >> classificacao[j][k];			
		
			}
		}

		int sistemas, ultimo;

		cin >> sistemas;

		for(int l=0; l<sistemas; l++){

			for(int m=0; m<qtde; m++){
			
				pilotos[m].id = m+1;
				pilotos[m].pontos = 0;
			
			}

			cin >> ultimo;

			int pontuacao[ultimo];

			for(int n=0; n<ultimo; n++){
	
				cin >> pontuacao[n];

			}

			for(int num_gp = 0; num_gp < gp; num_gp++){

				for(int num_piloto = 0; num_piloto < qtde; num_piloto++){

					if(classificacao[num_gp][num_piloto] > ultimo) continue;

					else pilotos[num_piloto].pontos += pontuacao[classificacao[num_gp][num_piloto] - 1];

				}
			}

			sort(pilotos, pilotos+qtde, ordem);

			for(int ord = 0; ord < qtde; ord++){
				
				if(ord == 0) cout << pilotos[ord].id;

				else if(pilotos[ord].pontos == pilotos[ord-1].pontos) cout << " " << pilotos[ord].id;

				else break;
			}

			cout << endl;

		}
	}
}
