#include<bits/stdc++.h>
using namespace std;
vector<int>unions(vector<int>&a,vector<int>&b){
    int i=0;
    int j=0;
    int n=a.size();
    int m=b.size();
    vector<int>inter;
    while(i<n&&j<m){
        if(a[i]>b[j]){
            i++;
        }
        else if(a[i]<b[j]){
            j++;
        }
        else{
            inter.push_back(a[i]);
            i++;
            j++;
        }
    }
    return inter;
}
int main(){
    int n,m;
    cout<<"Enter the sizes:";
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>result=inter(a,b);
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}
