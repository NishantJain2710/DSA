#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    //write your code here
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int flag = 0;
        
        for(int j=2; j<=n/2; j++){
            if(n % j == 0){
                cout<<"not prime\n";
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"prime\n";
        }
    }
}