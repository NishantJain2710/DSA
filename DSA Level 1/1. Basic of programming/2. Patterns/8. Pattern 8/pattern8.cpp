#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            cout<<"\t";
        }
        cout<<"*\n";
    }
}