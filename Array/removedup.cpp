#include<bits/stdc++.h>
using namespace std;
void sorts(vector<int>&arr){
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
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
    vector<int>arr(n);
    cout<<"Enter the values:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorts(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            arr.erase(arr.begin()+i);
            i--;
        }
    }
    cout<<"After removing duplicates:";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}
