#include<iostream>
using namespace std;
void pattern7(int n){
    for(int i=0;i<n;i++){
        //To print spaces
        for(int j=0;j<n-1-i;j++){
            cout<<"  ";
        }
        //To print Stars
        for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        //Again to print space
        for(int j=0;j<n-1-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    pattern7(n);
    return 0;
}
