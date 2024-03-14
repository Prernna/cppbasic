#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	for(int i=0;i<v.size();i++){ //here size is a function
		cout<<v[i]<<endl;
	}//1 2 3
	
	//auto -> is a keyword which decides itself which datatype is present according to the initialization
	for(auto int element : v){
		cout<<element<<endl;
	}//1 2 3 
	
	v.pop_back(); // 1 2
	
	vector<int> v2 (3,4);
	// 4 4 4
	
	swap(v,v2);
	for(auto element : v){
		cout<<element<<endl;
	}
	for(auto element : v2){
		cout<<element<<endl;
	}
	
		
	return 0;
}
