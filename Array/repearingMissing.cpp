class Solution{
    vector<int>repearingMissing(vector<int>&nums){
        long long n=nums.size();
        long long sn=(n*(n+1))/2;
        long long s2n=(n*(n+1)*(2*n+1))/6;
        long long s=0;
        long long s2=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
            s2+=(long long)nums[i]*(long long)nums[i];
        }
        long long val1=s-sn;
        long long val2=s2-s2n;
        val2=(val2/val1);
        long long repeating=(val1+val2)/2;
        long long missing=val2-repeating;
        return {(int)repeating,(int)missing};
    }
};
