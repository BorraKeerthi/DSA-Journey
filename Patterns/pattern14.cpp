#include<iostream>
using namespace std;
void pattern14(int n){
    string s1="A";
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch;
            
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    pattern14(n);
    return 0;
}
