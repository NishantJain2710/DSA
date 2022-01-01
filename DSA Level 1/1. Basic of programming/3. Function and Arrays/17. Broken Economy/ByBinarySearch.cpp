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

    int low = 0;
    int high = n-1;

    int ceil;
    int floor;

    while(low<=high){
        int mid = (low + high) / 2;

        if(arr[mid] < data){
            low = mid + 1;
            floor = arr[mid];
        }else if(arr[mid] > data){
            high = mid - 1;
            ceil = arr[mid];
        }else{
            floor = arr[mid];
            ceil = arr[mid];
            break;
        }
    }

    cout<<ceil<<"\n"<<floor;
    
}