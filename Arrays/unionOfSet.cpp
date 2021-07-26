#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,cnt;
	cin>>n>>m;
	int a[n],b[m];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<m;i++){
		cin>>b[i];
	}
        set<int> s1;
        for (i = 0; i < n; i++) {
            s1.insert(a[i]);
        }
        for (i = 0; i < m; i++) {
            s1.insert(b[i]);
        }
        cnt=s1.size();
        cout<<cnt;
        return 0;
}
