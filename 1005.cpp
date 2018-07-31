#include<bits/stdc++.h>
#define PESO_A 3.5
#define PESO_B 7.5

using namespace std;

float media(float nota_a, float nota_b){
	
	return (PESO_A * nota_a + PESO_B * nota_b)/ (PESO_A + PESO_B);
}

int main(){
	
	float n_a, n_b;
	
	cin >> n_a;
	cin >> n_b;
	
	printf("MEDIA = %.5f\n", media(n_a, n_b));
	
	return 0;
}
