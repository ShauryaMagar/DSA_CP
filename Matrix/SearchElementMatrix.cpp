class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m,n,i;
        m=matrix.size();
        n=matrix[0].size();
        bool ans=false;
        for(i=0;i<m;i++){
            if(target>=matrix[i][0]&&target<=matrix[i][n-1]){
                int l=0,p=n-1;
                while(l<=p){
                    int mid= l+(p-l)/2;
                    if(matrix[i][mid]==target){
                        ans=true;
                        break;
                    }
                    if(matrix[i][mid]<target){
                        l=mid+1;
                    }else{
                        p=mid-1;
                    }
                }
                break;
            }
        }
        return ans;
    }
};
