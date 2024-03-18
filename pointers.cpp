#include <iostream>
using namespace std;

//POINTERs --> a data type which holds the address of other data types


int main(){
	
	int a=4;
	int* b = &a; //here int* is a pointer variable that holds the address of a
	//& ---> address of operator
	cout<<"The address of a is "<<b<<endl;
	cout<<"The address of a is "<<&a<<endl;
	// * --> (value at)Dereference operator	
	cout<<"The value at address b is "<<*b<<endl;
	
	//Pointer to pointer
	int** c =&b;
	cout<<"The address of b is "<<&b<<endl;
	cout<<"The address of b is "<<c<<endl;
	cout<<"The value at address value at(value at(c)) is "<<**c<<endl;
	
	return 0;
}
