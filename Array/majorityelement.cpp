#include<bits/stdc++.h>
using namespace std;
int majorityelement(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt>n/2){
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
