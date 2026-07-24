#include<iostream>
using namespace std;
void pattern9(int n){
    for(int i=0;i<n;i++){
        //To print Spaces
        for(int j=0;j<n-1-i;j++){
            cout<<"  ";
        }
        //To print Stars
        for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        //To print Spaces
        for(int j=0;j<n-1-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
        //Repating the pattern upside down
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n-1-i;j++){
                cout<<"  ";
            }
            for(int j=0;j<2*i+1;j++){
                cout<<"* ";
            }
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
    pattern9(n);
}
