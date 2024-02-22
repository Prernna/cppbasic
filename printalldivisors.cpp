#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    //Print all divisors
    int n;
    cin>>n;
    for(int i = 1; i<=n ; i++){
        if(n%i==0) cout<<i<<endl;
    }
//GCD HCF
int n1,n2;
cin >>n1>>n2;
int gcd;
for(int i = 1; i<= min(n1,n2) ; i++){
    if (n1%i ==0 && n2%i ==0)
     gcd = i;
    cout<<gcd<<endl;
}
     
    return 0;
}
