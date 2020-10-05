#include <iostream>

using namespace std;

int main(){
	long long num;

	cin >> num;

	bool resp = true;

	for(long long i=2; i*i <= num; i++){
		if(num % i == 0){
			resp = false;
			break;
		}
	}

	if(resp and num != 1) cout << "S\n";
	else cout << "N\n";

	return 0;
}

