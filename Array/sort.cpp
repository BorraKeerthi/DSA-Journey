#include<bits/stdc++.h>
using namespace std;
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int cnt=0,cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt++;
            }
            else if(nums[i]==1){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
        for(int i=0;i<cnt;i++){
            cout<<0<<",";
        }
        for(int i=0;i<cnt1;i++){
            cout<<1<<",";
        }
        for(int i=0;i<cnt2;i++){
            cout<<2<<",";
        }
    }
int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sortColors(nums);
    return 0;
}
