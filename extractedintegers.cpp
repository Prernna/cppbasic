#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	//Extraction of digits
	int n;
	cin>>n;
	while(n>0){
		cout<<"Enter integers to be extracted "<<endl;
		int lastdigit = n%10;
		n = n/10;
		cout<<n<<endl; 
	}
	
	
	
	
	return 0;
}
