#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,hare,tort;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	hare=arr[0];
	tort=arr[0];
	do{
		hare=arr[arr[hare]];
		tort=arr[tort];
	}while(hare!=tort);
	tort=arr[0];
	do{
		hare=arr[hare];
		tort=arr[tort];
	}while(hare!=tort);
	cout<<hare;
	return 0;
}
