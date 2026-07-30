#include<iostream>
using namespace std;
int fact=1;
int factorial(int n){
    if(n<=1) return 1;
    fact=fact*n;
    n--;
    factorial(n);
    return 0;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    factorial(n);
    cout<<fact;
    return 0;
}
