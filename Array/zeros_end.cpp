#include<bits/stdc++.h>
using namespace std;
void movezeros(vector<int>&nums,int n){
    int count=0;
    vector<int>temp;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            temp.push_back(nums[i]);
            count++;
        }
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            nums[j]=nums[i];
            j++;
        }
    }
    for(int i=0;i<count;i++){
        nums.push_back(temp[i]);
    }
}
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    movezeros(nums,n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
