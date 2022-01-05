#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int pos = 1;
    int newNumber = 0;
    while(n>0){

        int r = n%10;
        newNumber = newNumber + (pos * pow(10, r-1));
        n = n/10;
        pos++;
    }
    cout<<newNumber;
}