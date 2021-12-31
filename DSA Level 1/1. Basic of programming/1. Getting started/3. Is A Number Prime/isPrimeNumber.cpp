#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    int n;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n==1){
            cout<<"not prime\n";
        }else{
            for(int j=2;j<n;j++){
                if(n%j == 0){
                    cout<<"not prime\n";
                    break;
                }
                cout<<"prime\n";
            }
        }
    }
}