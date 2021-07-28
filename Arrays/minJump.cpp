#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,jumps,maxReach,n,steps;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	jumps=1;
	maxReach=arr[0];
	steps=arr[0];
	for(i=1;i<n;i++){
		if(i==n-1){
			break;
		}
		maxReach= max(maxReach,i+arr[i]);
		steps--;
		if(steps==0){
			jumps++;
			if(i>=maxReach){
				jumps=-1;
				break;
			}
			steps=maxReach-i;
		}
	}
	cout<<jumps;
	return 0;
}
