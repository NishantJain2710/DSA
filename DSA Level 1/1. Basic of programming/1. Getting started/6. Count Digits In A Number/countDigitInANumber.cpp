#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int count = 0;
    while(n/10 > 0){
        count++;

        n = n/10;
    }
    count++; //for the last digit
    cout<<count;
    
}