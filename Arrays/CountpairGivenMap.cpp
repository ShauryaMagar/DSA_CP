#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,sum;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	unordered_map<int,int> m;
	sum=0;
	for(i=0;i<n;i++){
		m[arr[i]]++;
	}
	for(i=0;i<n;i++){
		sum=sum+m[k-arr[i]];
		if(k-arr[i]==arr[i]){
			sum--;
		}
	}
	cout<<sum/2;
	return 0;
}
