#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int count=0;
    int maxcount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                maxcount=max(maxcount,count);
            }
            else{
                count=0;
            }
        }
        return maxcount;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int arr=findMaxConsecutiveOnes(nums);
    cout<<arr;
}
