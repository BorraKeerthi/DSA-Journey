int sqroot(int n){
    int low=1;
    int high=n;
    while(low<=high){
        long long mid=(low+high)/2;
        if(mid*mid<=n){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
