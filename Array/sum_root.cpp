#include<bits/stdc++.h>
using namespace std;
int sumsroots(vector<int>arr){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int root=sqrt(sum);
    return root;
}
int main(){
    int n;
    cout<<"Enter the size of n:";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumsroots(arr)<<endl;
    return 0;
}
