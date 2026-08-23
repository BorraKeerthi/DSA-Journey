class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
        return 0;
    }
    int cnt=0;
    int largest=1;
    sort(nums.begin(),nums.end());
    int lastsmallest=nums[0]-1;
    for(int i=0;i<n;i++){
        if(nums[i]-1==lastsmallest){
            cnt++;
            lastsmallest=nums[i];
        }
        else if (nums[i]==lastsmallest){
            continue;
        }
        else {
            cnt=1;
            lastsmallest=nums[i];
        }
        largest=max(largest,cnt);
    }
    return largest;
    }
};
