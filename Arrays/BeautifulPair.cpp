#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,i,j,ans=0,diff=0;
		cin>>n;
		double arr[n];
		unordered_map<long long int, long long int> m;
		set <long long int> s;
		for(i=0;i<n;i++){
			cin>>arr[i];
			m[arr[i]]++;
			if(m[arr[i]]>1){
				diff=diff+((m[arr[i]]-1)*2);
			}
		}
		ans=(n-1)*(n);
		cout<<ans-diff<<endl;
	}
	return 0;
}
