#include<iostream>
using namespace std;
int sum=0;
void add(int n){
    if(n<0)return;
    sum=sum+n;
    n--;
    add(n);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    add(n);
    cout<<sum<<" ";
    return 0;
}
