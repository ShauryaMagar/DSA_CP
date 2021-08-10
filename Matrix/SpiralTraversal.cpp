
#include <stdio.h>
int* spirallyTraverse(int r, int c, int matrix[][c])
{   
    int m=0,n=0,i;
    int arr[r*c],j=0;
    while(r>m && c>n){
        for(i=n;i<c;i++){
            arr[j]=matrix[m][i];
            j++;
        }
        m++;
        for(i=m;i<r;i++){
            arr[j]=matrix[i][c-1];
            j++;
        }
        c--;
        if(m<r){
            for(i=c-1;i>=n;i--){
                arr[j]=matrix[r-1][i];
                j++;
            }
            r--;
        }
        if(n<c){
            for(i=r-1;i>=m;i--){
                arr[j]=matrix[i][n];
                j++;
            }
            n++;
        }
    }
    return arr;
}

// { Driver Code Starts.

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int r, c;
		scanf("%d", &r);
		scanf("%d", &c);
		int matrix[r][c];
	 
		for(int i = 0; i < r; i++){
			for(int j = 0; j < c; j++){
				scanf("%d", &matrix[i][j]);
			}
		}
		
		int *result = spirallyTraverse(r, c, matrix);
		for(int i = 0; i < r*c; i++)
			printf("%d ", result[i]);
		printf("\n");
	}
	return 0;
}  // } Driver Code Ends
