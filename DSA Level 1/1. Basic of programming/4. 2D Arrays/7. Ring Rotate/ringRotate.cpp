#include<bits/stdc++.h>
using namespace std;


void display(vector<vector<int>>&arr){
    
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<int> getShell(int s,int n , int m ,vector<vector<int>> (&arr)){
    int minRow = 0+s;
    int minCol = 0+s;
    int maxRow = n-s;
    int maxCol = m-s;
    vector<int> shell;

    for(int i=minRow, j=minCol; i<maxRow; i++){
        shell.push_back(arr[i][j]);
    }
    minCol++;
    
    for(int i=maxRow-1, j=minCol; j<maxCol; j++){
        shell.push_back(arr[i][j]);
    }
    maxRow--;

    for(int i=maxRow-1, j=maxCol-1; i>=minRow; i--){
        shell.push_back(arr[i][j]);
    }
    maxCol--;

    for(int i=minRow, j=maxCol-1; j>=minCol; j--){
        shell.push_back(arr[i][j]);
    }

    return shell;
}

void reverse(vector<int>& arr, int n, int m){
    for(int i=n, j=m-1; i<(m+n)/2; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void rotate(vector<int>& arr, int n, int r){
    if(r<0){
        r = r%n;
        r = r+n;
    }

    if(r>n){
        r = r%n;
    }

    reverse(arr,0, n-r);
    reverse(arr,n-r, n);
    reverse(arr,0, n);
}


void setShell(int s,int n , int m ,vector<vector<int>> (&arr), vector<int> &ele){
    int minRow = 0+s;
    int minCol = 0+s;
    int maxRow = n-s;
    int maxCol = m-s;
    vector<int> shell;

    int count =0;
    for(int i=minRow, j=minCol; i<maxRow; i++){
        arr[i][j] = ele[count];
        count++;
    }
    minCol++;
    
    for(int i=maxRow-1, j=minCol; j<maxCol; j++){
        arr[i][j] = ele[count];
        count++;
    }
    maxRow--;

    for(int i=maxRow-1, j=maxCol-1; i>=minRow; i--){
        arr[i][j] = ele[count];
        count++;
    }
    maxCol--;

    for(int i=minRow, j=maxCol-1; j>=minCol; j--){
        arr[i][j] = ele[count];
        count++;
    }
}

int main()
{
    int n, m, s, r;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    cin >> s >> r;
    s=s-1;
    
    // write your code here
    
    vector<int> elemets = getShell(s,n,m,arr);

    rotate(elemets, elemets.size(), r);

    setShell(s,n,m,arr, elemets);

    display(arr);


}