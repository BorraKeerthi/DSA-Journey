#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']+=1;
    }
    int times;
    cout<<"Enter the no of times:";
    cin>>times;
    while(times--){
        char find;
        cin>>find;
        cout<<hash[find-'a'];
    }
}
