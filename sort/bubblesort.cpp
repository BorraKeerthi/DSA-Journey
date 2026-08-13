#include<bits/stdc++.h>
using namespace std;
int Bubblesort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Bubblesort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
