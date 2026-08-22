class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
            vector<int>positive;
            vector<int>negative;
            int n=nums.size();
            for(int i=0;i<n;i++){
                if(nums[i]<0){
                    negative.push_back(nums[i]);
                }
                else{
                    positive.push_back(nums[i]);
                }
            }
            int i=0,j=0;
            vector<int>temp;
            while(i<positive.size()&&j<negative.size()){
                temp.push_back(positive[i++]);
                temp.push_back(negative[j++]);
            }   
            while(i<positive.size()){
                temp.push_back(positive[i++]);
            }
            while(j<negative.size()){
                temp.push_back(negative[j++]);
            }
            return temp;
    }
};
