#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    while(n>0){
        int r = n%10;
        cout<<r<<"\n";
        n = n/10;
    }
}