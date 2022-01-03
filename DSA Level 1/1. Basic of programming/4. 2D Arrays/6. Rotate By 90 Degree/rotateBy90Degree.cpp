#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void traversal (int n, vector<vector<int>> &arr){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

void display(int n, vector<vector<int>> &arr){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void reverse(int n, vector<vector<int>> &arr){
    int low = 0;
    int high = n-1;

    while(low<high){
        for(int i=0; i<n; i++){
            int temp = arr[i][low];
            arr[i][low] = arr[i][high];
            arr[i][high] = temp;
        }
        low++;
        high--;
    }
}
void rotate(int n, vector<vector<int>> &arr)
{
    // write your code here
    traversal(n,arr);
    reverse(n,arr);
    display(n, arr);
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    rotate(n, arr);
}