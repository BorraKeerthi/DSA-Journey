#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]+=1;
    }
    int times;
    cout<<"Enter the no of times:";
    cin>>times;
    while(times--){
        char c;
        cout<<"Enter the char to find:";
        cin>>c;
        cout<<hash[c];
    }
}
