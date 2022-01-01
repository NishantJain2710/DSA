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

    int firstIdx = -1;
    int lastIdx = -1;

    while(low <= high){
        int mid = (low + high) / 2;
            
        if(data < arr[mid]){
            high = mid - 1;
        }else if(data > arr[mid]){
            low = mid + 1;
        }else{
            int leftIdx = mid;
            int rightIdx = mid;


            while(arr[leftIdx] == data){
                if(lastIdx == 0){
                    break;
                }
                leftIdx--;
            }
            firstIdx = leftIdx + 1;

            while(arr[rightIdx] == data){
                if(rightIdx == n-1){
                    break;
                }
                rightIdx++;
            }
            lastIdx = rightIdx - 1;
            break;
        }
    }

    cout<<firstIdx<<"\n"<<lastIdx;
}