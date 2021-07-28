#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,curr,max;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	max=INT_MIN;
	curr=0;
	for(i=0;i<n;i++){
		curr=curr+arr[i];
		if(curr>max){
			max=curr;
		}
		if(curr<0){
			curr=0;
		}
	}
	cout<<max;
	return 0;
}
