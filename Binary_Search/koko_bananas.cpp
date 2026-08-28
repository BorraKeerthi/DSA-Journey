class Solution {
public:
    int maxel(vector<int>&piles){
        int n=piles.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    long long func(vector<int>&piles,int hourly){
        long long totalhr=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            totalhr+=ceil((double)piles[i]/((double)hourly));
        }
        return totalhr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maxel(piles);
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            long long totalhrs=func(piles,mid);
            if(totalhrs<=h){
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
