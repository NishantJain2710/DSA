#include<iostream>
using namespace std;

void reverse(int* arr, int n, int m){
    // write your code here
    for(int i=n, j=m-1; i<(m+n)/2; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void rotate(int* arr, int n, int k){
   // write your code here
    if(k<0){
        k = k % n;
        k = k + n;
    }

    if(k>n){
       k = k%n;
    }

    reverse(arr, 0, n-k);
    reverse(arr, n-k, n);
    reverse(arr, 0, n);
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, r;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cin>>r;
    
    rotate(arr,n,r);
    display(arr,n);
}