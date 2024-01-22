#include <iostream>
using namespace std;
/*  *******Basic control structure****
1.Sequence structure
2.Selection structure
3.loop structure

*/
int main(){
	//Selection structure -> if else-if else
	int marks;
	cout<<"Enter your marks "<<endl;
	cin>>marks;
	if(marks>=33){
		cout<<"Congrats you are pass!!"<<endl;
	}
	else if(marks<33){
		cout<<"Re do your exam you are fail !"<<endl;
	}
	else{
		cout<<"Marks should not be greater than 100 and less then 0."<<endl;
	}
	
	//Selection structure -> switch case
	int age;
	cout<<"what is your age"<<endl;
	cin>>age;
	switch(age){
		case 18:
		cout<<"You are now an adult"<<endl;
		break;
		case 17:
		cout<<"You are not an adult"<<endl;
		break;
		case 20:
		cout<<"All the best for your future"<<endl;
		break;
		default:
		cout<<"No special age."<<endl;
		break;	
			
	}
	
	return 0;
}
