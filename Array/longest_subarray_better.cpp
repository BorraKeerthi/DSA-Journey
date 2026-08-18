#include<bits/stdc++.h>
using namespace std;
int longestsubarray(vector<int>&nums,long long k){
    map<long long,int>findsum;
    int maxlen=0;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        
        sum+=nums[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        long long rem=sum-k;
        int len=0;
        if(findsum.find(rem)!=findsum.end()){
            len=i-findsum[rem];
            maxlen=max(len,maxlen);
        }
        findsum[sum]=i;
    }
    return maxlen;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int arr=longestsubarray(nums,3);
    cout<<arr;
}
