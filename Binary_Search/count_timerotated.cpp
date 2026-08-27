int countrotated(vector<int>&nums){
    int index=-1;
    int n=nums.size();
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[low]==nums[mid]&&nums[mid]==nums[high]){
            low++;
            high--;
            continue;
        }
        if(nums[low]<=nums[mid]){
            if(nums[low]<ans){
                index=low;
                ans=nums[low];
            }
            low=mid+1;
        }
        else{
            high=mid-1;
            if(nums[mid]<ans){
                index=mid;
                ans=nums[mid];
            }
        }
    }
    return index;
}
