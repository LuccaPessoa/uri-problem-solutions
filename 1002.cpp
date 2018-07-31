#include<bits/stdc++.h>
#define PI 3.14159

using namespace std;

double calculo_area(double raio){
	
	return PI * raio * raio;
}

int main(){
	
	double r;
	cin >> r;
	
	printf("A=%.4lf\n", calculo_area(r));
	
	return 0;
}
