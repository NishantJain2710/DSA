#include<iostream>
using namespace std;

int firstIndex(int arr[], int idx, int x, int n){
    // write your code here

    if(arr[idx]==x){
        return idx;
    }else{
        if(idx < n){
            return firstIndex(arr,idx + 1,x,n); 
        }else{
            return -1;
        }
    }
    
}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = firstIndex(arr, 0, d, n);
    cout << p << endl;
}