#include<iostream>
using namespace std;
void patter6(int n){
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    pattern5(n);
    return 0;
}
