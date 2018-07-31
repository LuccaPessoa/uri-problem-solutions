#include<bits/stdc++.h>

using namespace std;

int produto(int numero_1, int numero_2){
	
	return numero_1 * numero_2;
}

int main(){
	
	int num_1, num_2;
	
	cin >> num_1;
	cin >> num_2;
	
	cout << "PROD = " << produto(num_1, num_2) << endl;
	
	return 0;
}
