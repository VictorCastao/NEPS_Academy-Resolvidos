//Solução utilizando funções recursivas

#include <iostream>

using namespace std;

int comprimento, qtde, valores[10000];

long long calculo(long long soma, int posicao, int ultimo){

	if(posicao >= qtde) return soma; //Chegou ao final do vetor sem nenhum impedimento

	int dif1 = valores[posicao], dif2 = comprimento-valores[posicao]; //Possíveis medidas de comprimento
	long long a, b;

	if(dif1 < ultimo) a = 6000000000; //Número inválido
	else a = calculo(soma+dif1, posicao+1, dif1); //Recursão

	if(dif2 < ultimo) b = 6000000000; //Número inválido
	else b = calculo(soma+dif2, posicao+1, dif2); //Recursão	

	return min(a,b); //A resposta deve ser a menor soma possível. Se o menor for igual a 10^6, é impossível saber o comprimento correto
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> qtde >> comprimento;

	for(int i=0; i<qtde; i++) cin >> valores[i];

	long long resp = calculo(0,0,0); //Condição inicial da função

	if(resp == 6000000000) resp = -1; //Impossível
	
	cout << resp << endl;			

	return 0;
}
