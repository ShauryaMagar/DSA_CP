#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,temp;
	cin>>n>>m;
	int arr1[n];
	int arr2[m];
	for(i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(i=0;i<m;i++){
		cin>>arr2[i];
	}
	for(i=0;i<n;i++){
		if(arr1[i]>arr2[0]){
			temp=arr1[i];
			arr1[i]=arr2[0];
			arr2[0]=temp;
			sort(arr2,arr2+m);
		}
	}
	for(i=0;i<m-1;i++){
		if(arr2[i]>arr2[i+1]){
			swap(arr2[i],arr2[i+1]);
		}
	}
	for(i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	for(i=0;i<m;i++){
		cout<<arr2[i]<<" ";
	}
	return 0;
}
