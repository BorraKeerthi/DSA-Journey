#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int palindrome(string s,int i,int n){
    if(i>=n/2)return true;
    if(s[i]!=s[n-1-i])
        return false;
    return palindrome(s,i+1,n);
}
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int n=s.length();
   int a=palindrome(s,0,n);
   if(a==1){
       cout<<"Yes it is a Palindrome";
   }
   else{
       cout<<"No";
   }
    return 0;
}
