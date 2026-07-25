#include<iostream>
using namespace std;
void pattern12(int n){
    for(int i=1;i<=n;i++){
        //To print Numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //To print Spaces
        for(int j=1;j<2*n-2*i;j++){
            cout<<" ";
        }
        //To pritn Numbers 
         for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    pattern12(n);
    return 0;
}
