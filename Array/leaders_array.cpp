#include<bits/stdc++.h>
using namespace std;
vector<int>leaders(vector<int>&arr,int n){
    vector<int>temp;
    int max=arr[n-1];
    temp.push_back(max);
    for(int i=n-1;i>=0;i--){
        if(max<arr[i]){
            max=arr[i];
            temp.push_back(arr[i]);
        }
    }
    reverse(temp.begin(),temp.end());
    return temp;
}
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>nums=leaders(arr,n);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
