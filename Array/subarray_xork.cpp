class Solution{
public:
int subarray(vector<int>&nums,int k){
    int n=nums.size();
    int cnt=0;
    int xr=0;
    unordered_map<int,int>mp;
    mp[0]=1;
    for(int i=0;i<n;i++){
        xr^=nums[i];
        int required=xr^k;
        if(mp.find(required)!=mp.end()){
            cnt+=mp[required];
        }
        mp[xr]++;
    }
    return cnt;
}
};
