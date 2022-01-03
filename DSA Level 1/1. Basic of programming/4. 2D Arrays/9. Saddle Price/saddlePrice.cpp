#include <iostream>
#include <vector>
using namespace std;

void saddle_point(int n, vector<vector<int>> &arr)
{
    // write your code here
    vector<int> rowElements;
    vector<int> colElements;

    for(int i=0; i<arr.size(); i++){
        int smallest = arr[i][0];
        for(int j=0; j<arr[i].size(); j++){
            if(arr[i][j] < smallest){
                smallest = arr[i][j];
            }
        }
        rowElements.push_back(smallest);
    }

    for(int i=arr.size() -1; i>=0; i--){
        int greatest = arr[0][i];
        for(int j=0; j<arr.size(); j++){
            if(arr[j][i] > greatest){
                greatest = arr[j][i];
            }
        }
        colElements.push_back(greatest);
    }

    int flag =0;
    for(int i=0; i<arr.size(); i++){
        if(rowElements[i] == colElements[i]){
            cout<<rowElements[i];
            flag=1;
        }
    }
    if(flag ==0){
        cout<<"Invalid input";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    saddle_point(n, arr);
}