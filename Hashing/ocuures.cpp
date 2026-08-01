#include<iostream>
using namespace std;
int reptime(int number,int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==number){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int number;
    cout<<"Enter the number you are searching for:";
    cin>>number;
    cout<<reptime(number,arr,n);
}
