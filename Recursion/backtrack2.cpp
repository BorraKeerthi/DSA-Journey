#include<iostream>
using namespace std;
void backtrack(int i,int n){
    if(i>n)return;
    backtrack(i+1,n);
    cout<<i;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    backtrack(1,n);
    return 0;
}
