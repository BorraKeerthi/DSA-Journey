#include<bits/stdc++.h>
using namespace std;
int minmaxprice(vector<int>&nums,int n){
    int profit=0;
    int mini=nums[0];
    for(int i=1;i<n;i++){
        int cost=nums[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,nums[i]);
    }
    return profit;
}
int main(){
    int n;
    cout<<"Enter the size of n:";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int arr=minmaxprice(nums,n);
    cout<<arr;
    return 0;
}
