#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int times;
    cout<<"Enter the no of times you wanted to find:";
    cin>>times;
    while(times--){
        int number;
        cout<<"Enter the number to find:";
        cin>>number;
        cout<<mp[number]<<endl;
    }
}
