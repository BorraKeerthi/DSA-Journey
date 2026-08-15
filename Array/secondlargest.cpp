#include<bits/stdc++.h>
using namespace std;
void sorts(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
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
    cout<<"Enter the values ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorts(arr,n);
    cout<<"Sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The second largest element"<<arr[1];
    
    return 0;
}
