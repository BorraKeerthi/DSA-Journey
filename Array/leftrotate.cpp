#include<bits/stdc++.h>
using namespace std;
vector<int>rotate(vector<int>&nums){
    int temp=nums[0];
    for(int i=1;i<nums.size();i++){
        nums[i-1]=nums[i];
    }
    nums[nums.size()-1]=temp;
    return nums;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the value:";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    rotate(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
