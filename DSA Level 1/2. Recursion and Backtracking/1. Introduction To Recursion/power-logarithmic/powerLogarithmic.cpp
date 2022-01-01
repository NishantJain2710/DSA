#include<iostream>
using namespace std;

int powerLogarithmic(int x,int n){
    // write your code here
    if(n==0){
        return 1;
    }
    int y = powerLogarithmic(x,n/2);
    int z = y * y;

    if(n%2==1){
        z = z * x;
    }
    return z;
    
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}