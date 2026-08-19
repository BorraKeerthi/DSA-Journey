#include<bits/stdc++.h>
using namespace std;
int sums(vector<int>arr,int n,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int comple=target-arr[i];
        if(mp.find(comple)!=mp.end()){
            cout<< mp[comple]<<" "<<i;
        }
        mp[arr[i]]=i;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the size of n:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target:";
    cin>>target;
    int nums=sums(arr,n,target);
    return 0;
}
