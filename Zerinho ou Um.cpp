#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if(a == b and b == c) printf("*\n");
	else if(b == c and a != b) printf("A\n");
	else if(a == c and b != a) printf("B\n");
	else if(a == b and c != b) printf("C\n");
	return 0;
}
