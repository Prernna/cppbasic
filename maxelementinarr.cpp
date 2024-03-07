#include <bits/stdc++.h>
#include <vector>
using namespace std;

int tallest(vector<int>& hieghts){
    int max=0;
    for(int element : hieghts){
        if(element>max){
            max = element;
        }
    }
    return max;
}
int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    
    int N;
    cin>>N;
    vector<int> hieghts(N);
    //inputting hieghts of mountains
    for(int i=0;i<N;i++){
        cin>>hieghts[i];
    }
    
    //print thw max of tallest mountain
    cout<<tallest(hieghts)<<endl;
 
}
return 0;
}
