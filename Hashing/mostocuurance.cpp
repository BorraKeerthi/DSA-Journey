#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the created array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[15]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int maxFreq=0;
    int mostFrequent=0;
    for(int i=0;i<n;i++){
        if(hash[i]>maxFreq){
            maxFreq=hash[i];
            mostFrequent=i;
        }
    }
    cout<<mostFrequent<<" has the most no of occurance for "<<maxFreq<<" times"<<endl;
}
