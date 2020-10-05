#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int N;
    cin >> N;
    int vetor[N];
    for(int i=0; i<N; i++){
    	cin >> vetor[i];
    }
    sort(vetor, vetor+N);    
    for(int j=0; j<N; j++){
    	cout << vetor[j] << " ";
    }
    cout << endl;
    return 0;
}
