#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        int i,ans=0,ty=n/k;
        unordered_map<int,int> m;
        set<int> s;
        for(i=0;i<n;i++){
            m[arr[i]]++;
            s.insert(arr[i]);
        }
        set<int>::iterator itr;
        for (itr = s.begin(); itr != s.end(); itr++)
        {
            if(m[*itr]>ty){
                ans++;
            }
        }
        return ans;
    }
};
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
