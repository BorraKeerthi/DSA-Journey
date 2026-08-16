#include<bits/stdc++.h>
using namespace std;
void largest(vector<int>&arr){
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
             
    
        }
        if(arr[i]<largest&&arr[i]>slargest){
            slargest=arr[i];
           
        }
       
    }
    cout<<"Largest:"<<largest<<endl;
     cout<<"Second largest:"<<slargest<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largest(arr);
    
}
