#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int N;
cin>>N;
// cout<<N<<endl;
while(N--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b & a>c || a>b & a<c){
        cout<<a<<endl;
    }
    else if(b>a & b<c || b>c & b<a){
        cout<<b<<endl;
    }
    else {
        cout<<c<<endl;
    }
}

}
