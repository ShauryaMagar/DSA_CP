#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	j=n-1;
	int arr2[n];
	int ind=0;
	for(i=j;i>=0;i--){
		arr2[ind]=arr[i];
		ind++;
	}
	for(i=0;i<n;i++){
		cout<<arr2[i]<<"\t";
	}
	return 0;
}

