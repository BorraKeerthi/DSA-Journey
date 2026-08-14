#include<bits/stdc++.h>
using namespace std;
void insertionsort(vector<int>&arr,int n){
    if(n<=1){
        return;
    }
    insertionsort(arr,n-1);
    int j=n-2;
    int last=arr[n-1];
    while(j>=0&&arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
