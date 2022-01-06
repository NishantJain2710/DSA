#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int first = 0;
    int sec = 1;
    int next = 0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<next<<"\t";
            first = sec;
            sec = next;
            next = first + sec;
        }
        cout<<"\n";
    }
}