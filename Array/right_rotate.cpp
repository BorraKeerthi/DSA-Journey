#include<bits/stdc++.h>
using namespace std;
vector<int>rotate(vector<int>nums,int k){
    k=k%nums.size();
    vector<int>temp;
    for(int i=nums.size()-k;i<nums.size();i++){
        temp.push_back(nums[i]);
    }
    for(int i=nums.size()-k-1;i>=0;i--){
        nums[i+k]=nums[i];
    }
    for(int i=0;i<k;i++){
        nums[i]=temp[i];
    }
    return nums;
}
int main(){
    int n;
    cout<<"Enter the value:";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k;
    cout<<"Enter the right rotate of:";
    cin>>k;
    nums=rotate(nums,k);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
