int subarray(vector<int>&nums){
    int n=nums.size();
    int maxlen=0;
    long long  sum=0;
    unordered_map<long long,int>mp;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum==0){
            maxlen=i+1;
        }
        if(mp.find(sum)!=mp.end()){
            maxlen=max(maxlen,i-mp[sum]);
        }
        else{
            mp[sum]=i;
        }
    }
    return maxlen;
}
