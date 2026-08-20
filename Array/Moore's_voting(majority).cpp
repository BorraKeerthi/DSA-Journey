#include<bits/stdc++.h>
using namespace std;
int majorityelement(vector<int>&arr,int n){
    int el=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=arr[i];
        }
        else if(arr[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1;
    for(int i=0;i<n;i++){
        if(el==arr[i]){
            cnt1++;
        }
    }
    if(cnt1>n/2){
        return el;
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
