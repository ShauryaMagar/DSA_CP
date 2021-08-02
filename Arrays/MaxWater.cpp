#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int trappingWater(int height[], int n){
        stack <int> st;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            while ((!st.empty()) && (height[st.top()] < height[i]))
            {
                int pop_height = height[st.top()];
                st.pop();
                if (st.empty())
                    break;
                int distance = i - st.top() - 1;
                int min_height = min(height[st.top()],height[i])-pop_height;
    
                ans += distance * min_height;
            }
            st.push(i);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
