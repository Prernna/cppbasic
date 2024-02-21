#include <iostream>
#include <iomanip> //manipulator in cpp
using namespace std;

int main(){
	//Constants (const) keywords are used to permanent the value given in a datatype
	
	const int a =8; //a cannot be changed further
	cout<<"The value of a is "<<a<<endl;
	
	//Manipulators
	int x=9 , y=15 , z=145;
	cout<<"The value of x , y and z is "<<endl<<x<<endl<<y<<endl<<z<<endl;
	cout<<"The value of x ,y and z using set w is "<<endl<<setw(3)<<x<<endl<<setw(3)<<y<<endl<<setw(3)<<z<<endl;
	
	//Operator Precedence
	//*,/,% have hiegher precedence than + and -
	int b=5;
	int c = a*5-b*(4/2);
	int d = (a*5)-b*4/2;
	cout<<c<<endl<<d;
	
	return 0;
}
