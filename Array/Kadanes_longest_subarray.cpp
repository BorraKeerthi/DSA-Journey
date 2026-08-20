#include<bits/stdc++.h>
using namespace std;
int maxsubarray(vector<int>&nums,int n){
    int sums=0;
    int maxs=INT_MIN;
    int anstart=-1;
    int ansend=-1;
    int start=0;
    for(int i=0;i<n;i++){
        if(sums==0){
            start=i;
        }
        sums+=nums[i];
        
        if(sums<0){
            sums=0;
        }
        if(sums>maxs){
            maxs=sums;
            anstart=start;
            ansend=i;
        }
    }
    for(int i=anstart;i<=ansend;i++){
        cout<<nums[i]<<" ";
    }
    return maxs;
}
int main(){
     int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int arr=maxsubarray(nums,n);
    cout<<arr;
}
