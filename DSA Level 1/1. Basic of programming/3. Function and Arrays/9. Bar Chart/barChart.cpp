#include<iostream>
using namespace std;

void getBarChart(int arr[],int n){
    
    int larger = arr[0];
    for(int i=0; i<n; i++){
        if(larger < arr[i]){
            larger = arr[i];
        }
    }

    for(int i=(larger); i>0; i--){
        for(int j=0; j<n; j++){
            if(arr[j]>=i){
                cout<<"*\t";
            }else{
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
}

int main(){
    //write your code here
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    getBarChart(arr, n);
}