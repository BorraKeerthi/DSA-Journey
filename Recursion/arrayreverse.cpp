#include<iostream>
using namespace std;
int reversearray(int arr[],int left,int right){
    if(left>=right)
    return 0;
    swap(arr[left],arr[right]);
    return reversearray(arr,left+1,right-1);
}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    int left=0;
    int right=n-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversearray(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
