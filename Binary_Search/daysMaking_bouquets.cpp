class Solution {
public:
    bool possible(vector<int>&bloomDay,int day,int m,int k){
        int cnt=0,nofB=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cnt++;
            }
            else{
                nofB+=(cnt/k);
                cnt=0;
            }
        }
        nofB+=(cnt/k);
        if(nofB>=m){
            return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }
        long long val=m*1LL*k*1LL;
        if(bloomDay.size()<val){
            return -1;
        }
        int low=mini,high=maxi,ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)==true){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
