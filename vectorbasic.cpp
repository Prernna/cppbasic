#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	vector<int> v;  //Declared statically
	//vector<int> = vp.new vector //declared dynamically
	
	v.push_back(10); //to insert numbers in vector we use push back
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
		v.pop_back(); //to remove elements from vector we use pop back
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	
	}
	cout<<"Capacity of vector : "<<v.capacity()<<endl;
	
	
	
}
