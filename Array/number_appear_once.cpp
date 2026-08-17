 #include<bits/stdc++.h>
 using namespace std;
 int number_appear_once(vector<int>&nums,int n){
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr^=nums[i];
    }
    return xorr;
 }
 int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int arr=number_appear_once(nums,n);
    cout<<arr<<" ";
    return 0;
 }
