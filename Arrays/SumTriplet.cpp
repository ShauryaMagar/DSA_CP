

 // } Driver Code Ends
class Solution{
    public:
    bool find3Numbers(int A[], int arr_size, int sum)
    {
        for (int i = 0; i < arr_size - 2; i++) 
        {
            unordered_set<int> s;
            int curr_sum = sum - A[i];
            for (int j = i + 1; j < arr_size; j++) 
            {
                if (s.find(curr_sum - A[j]) != s.end()) 
                {
                    return true;
                }
                s.insert(A[j]);
            }
        }
    return false;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends
