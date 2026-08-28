
int countStudent(vector<int>&arr,int mid){
    int cntst=1,pages=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }
        else{
            cntst++;
            pages=arr[i];
        }
    }
    return cntst;
}
int allocateBook(vector<int>&arr,int m){
    int n=arr.size();
    int maxi=INT_MIN;
    int sum=0;
    if(m>n) return -1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        sum+=arr[i];
    }
    int low=maxi,high=sum;
    while(low<=high){
        int mid=(low+high)/2;
        int count=countStudent(arr,mid);
        if(count>m) low=mid+1;
        else high=mid-1;
    }
    return low;
}
