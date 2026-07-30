#include<iostream>
using namespace std;
int i;
void reverseprint(int n){
    if(i==0)return ;
    cout<<i<<" ";
    i--;
    reverseprint(n);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    i=n;
    reverseprint(n);
    return 0;
}
