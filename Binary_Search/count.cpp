int count(vector<int>& nums, int target) {
    int first=-1;
    int last=-1;
    int cnt=0;
    first=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    if (first == nums.size() || nums[first] != target) {
        return {-1, -1};
    }
    last=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
    int cnt=last-first+1;
    return cnt;
}
