class Solution {
public:
    int func(vector<int>&weights,int capa){
        int days=1,load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>capa){
                days=days+1;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            maxi=max(maxi,weights[i]);
        }
        int low=maxi;
        int high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            int noofdays=func(weights,mid);
            if(noofdays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
