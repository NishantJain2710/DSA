#include<iostream>
using namespace std;

int factorial(int n){
    // write your code here
    static int i = 1;
    if(n>=1){
        i = i*n;
        factorial(n-1);
    }
    return i;
}


int main(){
    int n; cin>>n;
    cout<<factorial(n);
}