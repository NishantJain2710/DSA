#include<iostream>
using namespace std;

void printIncreasing(int n){
    // write your code here
    static int i = 1;
    if(i <= n){
        cout<<i<<"\n";
        i++;
        printIncreasing(n);
    }
}


int main(){
    int n; cin>>n;
    printIncreasing(n);
}