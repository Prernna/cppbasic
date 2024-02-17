#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void print(){
	if(cnt == 4) return ;
	cout<<cnt<<endl;
	cnt++;
	print();
	
}

int sum(int num1,int num2){
	int num3;
	num3 = num1 + num2;
	cout<<num3;
}

int main(){
	
	print();
	int num1,num2;
	cin>>num1>>num2;
	sum(num1,num2);
	
	
}
