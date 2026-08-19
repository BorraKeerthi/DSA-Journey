#include<bits/stdc++.h>
using namespace std;
int sums(vector<int>arr,int n,int target){
    int left=0;
    int right=n-1;
    sort(arr.begin(),arr.end());
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            cout<<left<<" "<<right;
            return 0;
        }
        else if(sum<target){  
            left++;
        }
        else{
            right--;
        }
    }
    cout<<"Not found";
    return 0;
}
int main(){
    int n;
    cout<<"Enter the size of n:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target:";
    cin>>target;
    cout<<"The index in the output is given based on the sorted array";
    int nums=sums(arr,n,target);
    return 0;
}
