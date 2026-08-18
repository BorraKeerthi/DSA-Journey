#include<bits/stdc++.h>
using namespace std;
int longestsubarray(vector<int>&nums,int n,int target){
    int maxlen=0;
    for(int i=0;i<n;i++){
         int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==target){
                maxlen=max(maxlen,j-i+1);
            }
        }
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
    int target;
    cout<<"Enter the target";
    cin>>target;
    int arr=longestsubarray(nums,n,target);
    cout<<arr;
    return 0;
}
