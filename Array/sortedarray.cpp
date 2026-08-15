#include<bits/stdc++.h>
using namespace std;
bool issorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the values:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(issorted(arr,n)){
        cout<<"The array is sorted";
    }
    else{
        cout<<"The array is not sorted";
    }
    return 0;
}
