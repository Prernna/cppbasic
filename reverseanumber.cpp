#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
//Reverse a no.
int revno =0;
int n;
cin>>n;
while(n>0){
    int lastdigit = n%10;
    n = n/10;
    revno = (revno*10) + lastdigit;
    cout<<revno<<endl;
}

return 0;
}
