#include<iostream>
using namespace std;
int i=1;
void print(int n){
    if(i>n)return ;
    cout<<i<<" ";
    i++;
    print(n);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    print(n);
    return 0;
}
