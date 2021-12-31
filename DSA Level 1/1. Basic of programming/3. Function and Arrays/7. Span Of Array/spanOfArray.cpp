#include<iostream>
#include <vector>

using namespace std;

int getSpan(vector<int>& arr){
    int length = arr.size();
    int small = arr[0];
    int large = arr[0];

    for(int i=0; i<length; i++){
        if(small > arr[i]){
            small = arr[i];
        }

        if(large < arr[i]){
            large = arr[i];
        }
    }

    int result = large - small;
    return result;
}

int main(){
    //write your code here
    int n; //no of elements
    cin>>n;

    vector<int> arr; //arr of elements n

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    cout<<getSpan(arr);

}