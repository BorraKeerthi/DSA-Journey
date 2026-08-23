int largestarray(vector<int>&nums,int n){
    if(n==0){
        return 0;
    }
    int cnt=0;
    int largest=1;
    int lastsmallest=INT_MIN;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(nums[i]-1==lastsmallest){
            cnt++;
            lastsmallest=nums[i];
        }
        else if(nums[i]-1!=lastsmallest){
            cnt=1;
            lastsmallest=nums[i];
        }
        largest=max(largest,cnt);
    }
    return largest;
}
