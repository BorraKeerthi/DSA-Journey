class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int last=-1;
        first=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if (first == nums.size() || nums[first] != target) {
            return {-1, -1};
        }
        last=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        return {first,last};
    }
};
