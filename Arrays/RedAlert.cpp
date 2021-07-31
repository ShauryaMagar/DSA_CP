#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int N,D,H,i,sum=0;
		string ans="NO";
		cin>>N>>D>>H;
		int arr[N];
		for(i=0;i<N;i++){
			cin>>arr[i];
		}
		for(i=0;i<N;i++){
			if(arr[i]==0){
				sum=sum-D;
				if(sum<0){
					sum=0;
				}
			}else{
				sum=sum+arr[i];
			}
			if(sum>H){
				ans="YES";
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
