#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>&nums,int n){
    int exceptedsum=n*(n+1)/2;
    for(int i=0;i<n;i++){
        exceptedsum-=nums[i];
    }
    return exceptedsum;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int arr=missing(nums,n);
    cout<<arr;
    return 0;
}
