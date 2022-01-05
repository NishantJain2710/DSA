#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int first = 1;
    int second = 1;
    cout<<"0\n"<<first<<"\n"<<second<<"\n";
    for(int i=3;i<n; i++){
        int next = first + second;
        cout<<next<<"\n";

        first = second;
        second = next;
    }
}