#include<iostream>
#include<vector>

using namespace std;

void columnTraversal(vector<vector<int>> mat){
//   Write your code here.
    for(int i=0; i<mat[0].size(); i++){
        if(i%2 ==0){
            for(int j=0; j<mat.size(); j++){
                cout<<mat[j][i]<<"\n";
            }
        }else{
            for(int j=mat.size()-1; j>=0; j--){
                cout<<mat[j][i]<<"\n";
            }
        }
    }
}

int main(){
    int n;
    int m;
    cin>> n;
    cin>> m;
    
    vector<vector<int>> mat;
    for(int i= 0; i< n; i++){
        vector<int> arr;
        for(int j= 0; j< m; j++){
            int ele;
            cin>> ele;
            arr.push_back(ele);
        }
        mat.push_back(arr);
    }
    
    columnTraversal(mat);
}