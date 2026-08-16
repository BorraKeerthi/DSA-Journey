#include<bits/stdc++.h>
using namespace std;
vector<int>unions(vector<int>&a,vector<int>&b){
    int i=0;
    int j=0;
    int n=a.size();
    int m=b.size();
    vector<int>unions;
    while(i<n&&j<m){
        if(a[i]<=b[j]){
            if(unions.size()==0||unions.back()!=a[i]){
                unions.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unions.size()==0||unions.back()!=b[j]){
                unions.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(unions.size()==0||unions.back()!=a[i]){
                unions.push_back(a[i]);
            }
            i++;
    }
    while(j<m){
        if(unions.size()==0||unions.back()!=b[j]){
                unions.push_back(b[j]);
            }
            j++;
    }
    return unions;
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
    vector<int>result=unions(a,b);
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}
