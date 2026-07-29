#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        cout<<lastdigit;
    }
    return 0;
}
