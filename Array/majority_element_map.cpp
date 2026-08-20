#include<bits/stdc++.h>
using namespace std;
int majorityelement(vector<int>&arr,int n){
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]>n/2){
            return arr[i];
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nums=majorityelement(arr,n);
    cout<<nums;
}
