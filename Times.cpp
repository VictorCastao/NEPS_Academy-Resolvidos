#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comparador(pair <string, int> a, pair <string, int> b){
	return a.second > b.second;
}

int main(){
	int qtde_alunos, num_times, time=0;

	cin >> qtde_alunos >> num_times;

	vector < pair <string, int> > times[num_times];

	pair<string, int> jogador[qtde_alunos];

	for(int i=0; i<qtde_alunos; i++){
		cin >> jogador[i].first >> jogador[i].second;
	}

	sort(jogador, jogador + qtde_alunos, comparador);

	for(int j=0; j<qtde_alunos; j++){
		times[time].push_back(jogador[j]);
		time++;
		if (time == num_times) time = 0;
	}

	for (int k=0; k<num_times; k++){
		sort(times[k].begin(), times[k].end());

		cout << "Time " << k+1 << endl;

		for (int l=0; l<times[k].size(); l++){
			cout << times[k][l].first << endl;
		}

		cout << endl;
	}
		
	return 0;
}
