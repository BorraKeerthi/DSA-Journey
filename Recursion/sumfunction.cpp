#include<iostream>
using namespace std;
int add(int n){
    if(n<1)return 0;
    return n+add(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<add(n);
    return 0;
}
