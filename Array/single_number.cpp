#include<bits/stdc++.h>
using namespace std;
int once(vector<int>&nums,int n){
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[nums[i]]==1){
            return nums[i];
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Value of n:";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int arr=once(nums,n);
    cout<<arr;
}
