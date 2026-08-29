#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>arr,int n,int m){
    int low=0,high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=m){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int rowWithMax1s(vector<vector<int>>arr,int n,int m){
    int cnt_max=0;
    int index=-1;
    for(int i=0;i<n;i++){
        int cnt_row=m-lowerBound(arr[i],m,1);
        if(cnt_row>cnt_max){
            cnt_max=cnt_row;
            index=i;
        }
    }
    return index;
}
