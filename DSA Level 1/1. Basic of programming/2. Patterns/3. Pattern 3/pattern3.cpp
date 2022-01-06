#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            cout<<"\t";
        }
        for(int j=0; j<i+1; j++){
            cout<<"*\t";
        }
        cout<<"\n";
    }
}