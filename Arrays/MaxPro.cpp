#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxi=arr[0],mini=arr[0],ans=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]<0){
			int tmp=maxi;
			maxi=mini;
			mini=tmp;
		}
		maxi=max(arr[i],arr[i]*maxi);
		mini=min(arr[i],arr[i]*mini);
		ans=max(ans,maxi);
	}
	cout<<ans<<endl;
	return 0;
}
