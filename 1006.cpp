#include<bits/stdc++.h>
#define P1 2
#define P2 3
#define P3 5

using namespace std;

float media(float a, float b, float c){
	
	return (a*P1 + b*P2 + c*P3)/(P1 + P2 + P3);
}



int main(){
	
	float letra_a, letra_b, letra_c;
	
	cin >> letra_a;
	cin >> letra_b;
	cin >> letra_c;
	
	printf("MEDIA = %.1f\n", media(letra_a, letra_b, letra_c));
	
	return 0;
}
