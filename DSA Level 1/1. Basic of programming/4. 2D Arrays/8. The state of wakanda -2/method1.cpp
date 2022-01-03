#include <iostream>
#include <vector>
using namespace std;

void upperDiagonal_traverse(int n, vector<vector<int>> &arr)
{
    // write your code here
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<arr[j+i][j]<<"\n";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[j][i];
    
    upperDiagonal_traverse(n, arr);
}