int nthroot(int root,int no){
    int low=0,high=no;
    while(low<=high){
        int mid=(low+high)/2;
        if(pow(mid,root)==no){
            return mid;
        }
        else if(pow(mid,root)<no){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
