#include <iostream>

using namespace std;

int Fibonacci (int x){
	if (x < 2){
    	return 1;
    }
    else{
    	return Fibonacci(x-1) + Fibonacci(x-2);
    }
}

int main(){
	int N;;
    cin >> N;
    cout << Fibonacci(N) << endl;
	return 0;
}
