#include<iostream>
using namespace std;
void pattern20(int n){
    int space=8;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        space-=2;
        cout<<endl;
    }
    int space1=2;
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<space1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        space1+=2;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    pattern20(n);
    return 0;
}
