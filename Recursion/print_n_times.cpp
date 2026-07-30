#include<iostream>
using namespace std;
int count=0;
void f(int n){
    if(count==n)return ;
    count++;
    f(n);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    f(n);
    cout<<"The total count is:"<<count;
    return 0;
}
