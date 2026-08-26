class Solution {
public:
    int merge(vector<int>&nums,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    int cnt=0;
    vector<int>temp;
    while(left<=mid){
        while(right<=high&&nums[left]>(2LL*nums[right])){
            right++;
        }
        cnt+=(right-(mid+1));
        left++;
    }
    left = low;
    right = mid + 1;
    while(left<=mid&&right<=high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
    return cnt;
}
int mergesort(vector<int>&arr,int low,int high){
    int cnt=0;
    int mid=(low+high)/2;
    if(low>=high) return cnt;
    cnt+=mergesort(arr,low,mid);
    cnt+=mergesort(arr,mid+1,high);
    cnt+=merge(arr,low,mid,high);
    return cnt;
}
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);       
    }
};
