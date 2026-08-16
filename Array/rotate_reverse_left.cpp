#include<bits/stdc++.h>
using namespace std;
void reversed(vector<int>&arr,int d,int n){
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.begin()+n);
    reverse(arr.begin(),arr.begin()+n);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversed(arr,2,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
