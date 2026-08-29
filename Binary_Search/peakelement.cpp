class Solution {
public:
    int findMaxIndex(vector<vector<int>>mat,int n,int m,int col){
        int index=-1,maxcol=-1;
        for(int i=0;i<n;i++){
            if(mat[i][col]>maxcol){
                maxcol=mat[i][col];
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int rowMaxIndex=findMaxIndex(mat,n,m,mid);
            int left=mid-1>=0?mat[rowMaxIndex][mid-1]:-1;
            int right=mid+1<m?mat[rowMaxIndex][mid+1]:-1;
            if(mat[rowMaxIndex][mid]>left&&mat[rowMaxIndex][mid]>right){
                return {rowMaxIndex,mid};
            }
            else if(mat[rowMaxIndex][mid]<left){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};
