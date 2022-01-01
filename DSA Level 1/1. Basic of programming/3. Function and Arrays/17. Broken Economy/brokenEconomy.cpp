#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    
    // write your code here

    for(int i=0; i<n; i++){
        if(data < arr[i]){
            cout<<arr[i]<<"\n"<<arr[i-1];
            break;
        }

        if(data == arr[i]){
            cout<<arr[i]<<"\n"<<arr[i];
            break;
        }
    }
    
}