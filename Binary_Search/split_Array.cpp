class Solution {
public:
    int allocate(vector<int>&nums,int mid){
        int count=1,slots=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(slots+nums[i]<=mid){
                slots+=nums[i];
            }
            else{
                count++;
                slots=nums[i];
            }
        }
        return count;
    }
    int split(vector<int>&nums,int k){
        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxi=max(maxi,nums[i]);
        }
        int low=maxi,high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            int s=allocate(nums,mid);
            if(s>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
    int splitArray(vector<int>& nums, int k) {
        return split(nums,k);
    }
};
