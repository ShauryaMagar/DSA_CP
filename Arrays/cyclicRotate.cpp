#include<bits/stdc++.h>
using namespace std;
int* rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        cin>>a[i];
        rotate(a, n);
        for (i = 0; i < n; i++)
            cout<<a[i]<<" ";
        printf("\n");
    }
        return 0;
}
int* rotate(int arr[], int n)
{
    int last=arr[n-1];
    int i,j;
    for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    return arr;
}
