#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int sum=0;
    int original=n;
    int lastdigit;
    int count=log10(n)+1;
    while(n>0){
        lastdigit=n%10;
        sum=sum+pow(lastdigit,count);
        n=n/10;
    }
    cout<<sum;
    if(sum==original){
        cout<<"Yes it is Armstrong";
    }
    else{
        cout<<"Not an armstrong";
    }
    return 0;
}
