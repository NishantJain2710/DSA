#include<iostream>

using namespace std;

int main(){
    int n, m, o, p;
    cin>>n;
    cin>>m;
    
    int arr1[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr1[i][j];
        }
    }

    cin>>o;
    cin>>p;

    int arr2[o][p], result[n][p];

    if(m != o){
        cout<<"Invalid input";
        return 0;
    }

    for(int i=0; i<o; i++){
        for(int j=0; j<p; j++){
            cin>>arr2[i][j];
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            result[i][j] = 0;
            for(int k=0; k<m; k++){
                result[i][j] =  result[i][j] + (arr1[i][k] * arr2[k][j]);
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
}