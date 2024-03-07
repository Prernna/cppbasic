#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int max(vector<int>& maxno){
	int high =0;
	for(int element: maxno){
		if(element>high){
			high = element;
		}
	}
	return high;
}

int min(vector<int>& minno){
	int low = INT_MAX;
	for(int element: minno){
		if(element<low){
		low=element;
		}
	}
	return low;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> maxno(n);
		for(int i=0;i<n;i++){
			cin>>maxno[i];
		}
		cout<<max(maxno)<<endl;
		
		vector<int> minno(n);
		for(int i=0;i<n;i++){
			cin>>minno[i];
		}
		cout<<min(minno)<<endl;
		cout<<"Difference between max and min is ";
		cout<<max(maxno)-min(minno)<<endl;
	}
	return 0;
}




