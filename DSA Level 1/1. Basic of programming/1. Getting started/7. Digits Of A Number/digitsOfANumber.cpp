#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int div = 1;
    while(n/div > 10){
        div = div * 10;
    }

    for(div; div>=1; div = (div / 10)){
        int q = n/div;
        int r = n%div;
        n=r;
        cout<<q<<"\n";
    }
}