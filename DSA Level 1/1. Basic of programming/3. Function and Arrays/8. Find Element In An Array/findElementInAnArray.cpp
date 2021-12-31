#include<iostream>
#include<vector>
using namespace std;

int getIndex(vector<int>& arr, int ele){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == ele){
            return i;
        }
    }
    return -1;
}

int main(){
    //write your code here
    int n;
    int element;
    vector<int> arr;

    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    cin>>element;

    cout<<getIndex(arr, element);
    
}