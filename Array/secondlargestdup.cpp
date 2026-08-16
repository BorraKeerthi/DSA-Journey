#include<bits/stdc++.h>
using namespace std;
void sorts(int arr[],int n){
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }
}
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorts(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int largest=arr[n-1];
    for(int i=n-2;i>=0;i--){
        int second=0;
        if(arr[i]!=largest){
            second=arr[i];
            cout<<second;
            break;
            
        }
    }
    
}
