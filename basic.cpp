#include <iostream>
#include <math.h>
#include <string>
#include <bits/stdc++.h >
using namespace std;

//void printname(){
//	cout<<"Her name is sun ! "<<endl;
//}
//void printName(string n){
//	cout<<"Hii "<<n<<endl;
//}
//int sum(int a, int b){
//	int c = a+b;
//	return c;
//}

int maxx(int num1, int num2){
	if(num1 >= num2) return num1;
	else return num2;
}

//pass by reference
void something(string s){
	s[0]='p';
	s[3]='s';
	cout<<s<<endl;
}
void some(string &s){
	s[0]='q';
	cout<<s<<endl;
}

void arrfunction(int ar[],int n){
	ar[0] += 100;
	cout<<"Value inside function: "<<ar[0] <<endl;
}

int main(){
	
	std::cout<<"BAsic of of cpp"<<std::endl;
//	//String
//	string str;
//	getline(cin, str); //used to take the whole string with space
//	cout<<str<<endl;
//	//char
//	char c;
//	cin>>c;
//	cout<<c<<endl;

//if-else statment ex
//int age;
//cin >> age;
//if(age<18){
//	cout<<"not eligible for job"<<endl;
//}	
//	else if(age>=18 && age<=54 ){
//		cout<<"eligible for job"<<endl;
//	}
//	else if(age>=55 && age<= 57){
//		cout<<"eligible for job, but retirement soon."<<endl;
//	}
//	else{
//		cout<<"Retirement time"<<endl;
//	}
	
//	//SWITCH
//	
//	int day;
//	cin>>day;
//	switch (day){
//		case 1 : cout<<"Monday"<<endl;
//		break;
//		case 2 : cout<<"Tuesday"<<endl;
//		break;
//		case 3: cout <<"Wednesday"<<endl;
//		break;
//		case 4: cout<<"Thursday"<<endl;
//		break;
//		case 5: cout<<"Friday"<<endl;
//		break;
//		default: cout<<"Only 1 to 5 are working days"<<endl;
//	}
   	
//	//FOR LOOP
//	for(int i=0;i<=5;i++){
//		cout<<"for loop"<<endl;
//	}
//	// WHILE
//	int i = 0;
//	while(i<=5){
//		cout<<"while"<<endl;
//		i++;
//	}
//	
//	//DO WHILE
//	do{
//		cout<<"DO-WHILE"<<endl;
//		i++;
//	}
//	while(i<=4);


//	//Functions-> void,return,parameterised,non-parameterised
//	//will be writing func. before int main
//	printname();
//	printName("prerna");
//	string n;
//	cin>>n;
//	printName(n);
//	
//	int a,b;
//	cin>>a>>b;
//	int res=sum(a,b);
//	cout<<res;


int num1,num2;
cout<<"enter the number "<<endl;
cin >> num1>>num2;

int minimum = min(num1,num2);
cout<<minimum <<" is minimum "<<endl;	
minimum=max(num1,num2);
cout<<minimum<<" is maximum"<<endl;

minimum = maxx(num1,num2);//calling maxx function
cout<<minimum<<endl;	
	
string s;
cout<<"Write your string"<<endl;
cin>>s;
something(s);
cout<<s<<endl;	

some(s);
cout<<s<<endl;

int n=5;
int arr[n];
for(int i=0; i<n ; i++){
	cin>>arr[i];
}
arrfunction(arr,n);
cout<<"Value inside int main: "<<arr[0]<<endl;
	
	return 0;
}
