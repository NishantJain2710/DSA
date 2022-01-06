#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=0, j=n-1; i<n && j>=0 ; i++,j--){
        for(int k=0; k<n; k++){
            if(k==i || k==j){
                cout<<"*\t";
            }else{
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
}