code cheff
Chef has started working at the candy store. The store has 
100
100 chocolates in total.

Chef’s daily goal is to sell 
�
X chocolates. For each chocolate sold, he will get 
1
1 rupee. However, if Chef exceeds his daily goal, he gets 
2
2 rupees per chocolate for each extra chocolate.

If Chef sells 
�
Y chocolates in a day, find the total amount he made.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of two space-separated integers 
�
X and 
�
Y — the daily goal of Chef, and the number of chocolates he actually sells.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        // your code goes here
        if(y<=x ){
            cout<<y<<endl;
        }
        else if(y>x){
            int z=x +(y-x)*2;
            cout<<z<<endl;
        }
    }
	

}
