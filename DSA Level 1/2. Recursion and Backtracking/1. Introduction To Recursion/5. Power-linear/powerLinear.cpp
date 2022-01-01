#include<iostream>
using namespace std;

int power(int x,int n){
   // write your code here
   if(n==0){
       return 1;
   }
    int y = x * power(x,n-1);
    return y;
}


int main(){
    int n,x; cin>>x>>n;
    cout<<power(x,n);
}