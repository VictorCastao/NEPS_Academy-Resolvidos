#include <iostream>
#include <cmath>
#include <cstdio>


using namespace std;
double norma(pair <double, double> a, pair <double, double> b){
	return sqrt(pow(b.first-a.first, 2) + pow(b.second-a.second, 2));
}

double cosseno(pair <double, double> a, pair <double, double> b, pair <double, double> c){
	pair <double, double> vet1, vet2;
	vet1.first = a.first-b.first;
	vet2.first = c.first-b.first;		
	vet1.second = a.second-b.second;
	vet2.second = c.second-b.second;
	double prod1 = vet1.first * vet2.first;
	double prod2 = vet1.second * vet2.second;	
	return (prod1 + prod2) / (norma(a,b) * norma(c,b));
}

pair<double, double> ponto_medio(pair <double, double> a, pair <double, double> b){
	pair <double, double> vet1, vet2;
	vet1.first = a.first+b.first;
	vet1.second = a.second+b.second;
	return make_pair(vet1.first/2 , vet1.second/2);
}

bool colinear(pair <double, double> a, pair <double, double> b, pair <double, double> c, pair <double, double> d){
	double soma1 = (a.first*b.second) + (b.first*c.second) + (c.first*a.second);
	double soma2 = (b.first*a.second) + (c.first*b.second) + (a.first*c.second);
	double soma3 = soma1-soma2;
	double soma4 = (b.first*c.second) + (c.first*d.second) + (d.first*b.second);
	double soma5 = (c.first*b.second) + (d.first*c.second) + (b.first*d.second);
	double soma6 = soma4-soma5;
	if(soma3 == 0 and soma6 == 0) return true;
	else return false;
}

bool interseccao(pair<double, double> A, pair<double, double> B, pair<double, double> C, pair<double, double> D){ 
	// Line AB represented as a1x + b1y = c1 
    double a1 = B.second - A.second; 
    double b1 = A.first - B.first; 
    double c1 = a1*(A.first) + b1*(A.second); 
  
    // Line CD represented as a2x + b2y = c2 
    double a2 = D.second - C.second; 
    double b2 = C.first - D.first; 
    double c2 = a2*(C.first)+ b2*(C.second); 
  
    double determinant = a1*b2 - a2*b1; 
  
    if (determinant == 0) 
    { 
        // The lines are parallel. This is simplified 
        return false; 
    } 
    else
    {
	bool resp1 = false, resp2 = false; 
        double x = (b2*c1 - b1*c2)/determinant; 
        double y = (a1*c2 - a2*c1)/determinant;
	if((x>C.first and x<D.first) or (x<C.first and x>D.first)) resp1 = true;
	if((y>A.second and y<B.second) or (y<A.second and y>B.second)) resp2 = true;	
        if(resp1 and resp2) return true;
	else return false; 
    } 	
}

bool perpendicular(pair <double, double> a, pair <double, double> b, pair <double, double> c, pair<double, double> d){
	pair <double, double> vet1, vet2;
	vet1.first = a.first-b.first;
	vet2.first = c.first-d.first;		
	vet1.second = a.second-b.second;
	vet2.second = c.second-d.second;
	double prod1 = vet1.first * vet2.first;
	double prod2 = vet1.second * vet2.second;	
	double resp = (prod1 + prod2) / (norma(a,b) * norma(c,d));
	if(resp == 0) return true;
	else return false;
}	
 
int main(){
	pair<double, double> vertices[8];
	//NA intersecção, mandar P1, P6, P2, P3
	int pontos = 0;
	for(int i=1; i<8; i++){	
		scanf("%lf %lf", &vertices[i].first, &vertices[i].second);
	}

	if(cosseno(vertices[2], vertices[1], vertices[3]) > 0) pontos++;

	if(norma(vertices[1], vertices[2]) == norma(vertices[1], vertices[3])) pontos++;

	if(colinear(vertices[2], vertices[3], vertices[4], vertices[5])) pontos++;

	if(ponto_medio(vertices[2], vertices[3]) == ponto_medio(vertices[4], vertices[5])) pontos++;

	if(norma(vertices[2], vertices[3]) > norma(vertices[4], vertices[5])) pontos++;

	if(perpendicular(vertices[4], vertices[6], vertices[2], vertices[3]) and perpendicular(vertices[5], vertices[7], vertices[2], vertices[3])) pontos++;
	
	if(norma(vertices[4], vertices[6]) == norma(vertices[5], vertices[7])) pontos++;
	
	if(interseccao(vertices[1], vertices[6], vertices[2], vertices[3])) pontos++;

	if(pontos==8) printf("S\n");
	else printf("N\n");
	return 0;
}

