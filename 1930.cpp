#include<bits/stdc++.h>

using namespace std;

int resultado(int a, int b, int c, int d){

	return (a+b+c+d)-3;
	
}

int main(){
	
	int t1, t2, t3, t4;
	cin >> t1 >> t2 >> t3 >> t4;
	cout << resultado(t1,t2,t3,t4) << "\n";
	
	return 0;
  
}
