#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int original=n;
    int digit,rev=0;
    while(n>0){
       digit=n%10;
       rev=rev*10+digit;
       n=n/10;
    }
    cout<<rev<<endl;
    if(original==rev){
        cout<<"Yes it is a Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}
