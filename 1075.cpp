#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin >> n; //lendo a variável N
  
	//regra do negócio
	for(int i = 1; i < 1000; i++){
		
		if(i % n == 2){
			cout << "\n" << i;
		}
	}
	return 0;
  }
