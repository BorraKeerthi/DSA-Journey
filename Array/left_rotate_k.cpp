#include<bits/stdc++.h>
using namespace std;
vector<int>rotate(vector<int>&nums,int k){
    k=k%nums.size();
    vector<int>temp;
    for(int i=0;i<k;i++){
        temp.push_back(nums[i]);
    }
    for(int i=k;i<nums.size();i++){
        nums[i-k]=nums[i];
    }
    nums.resize(nums.size()-k);
    for(int i=0;i<k;i++){
        nums.push_back(temp[i]);
    }
    return nums;
}
int main(){
    int n;
    cout<<"Value of n:";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k;
    cout<<"Value of k:";
    cin>>k;
    rotate(nums,k);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
