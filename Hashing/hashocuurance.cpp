#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array input:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[15]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int times;
    cout<<"Enter the number of times you want to search the numbers:";
    cin>>times;
    while(times--){
        int number;
        cout<<"Enter the number you want to find out:";
        cin>>number;
        cout<<hash[number];
    }
}
