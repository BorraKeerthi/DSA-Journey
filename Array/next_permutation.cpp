#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>&nums,int n){
    cout<< next_permutation(nums.begin(),nums.end())<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    permutation(nums,n);
    for(int i=0;i<n;i++){
        cout<<nums[i];
    }
    return 0;
}
