#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(n<=1){
        cout<<"Not a prime";
    }
    else if(count==0){
        cout<<"Prime";
    }
    else{
        cout<<"Not a prime";
    }
    return 0;
}
