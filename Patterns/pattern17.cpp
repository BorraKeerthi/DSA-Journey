#include<iostream>
using namespace std;
void pattern17(int n){
    for(int i=0;i<n;i++){
        //To print Space
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        //To print char
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        //To print space 
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    pattern17(n);
    return 0;
}
