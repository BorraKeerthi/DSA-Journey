#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1)
        return n;
return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"Enter the limit value of n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"for the value of n:"<<i<<" "<<fib(i)<<endl;
    }
    return 0;
}
