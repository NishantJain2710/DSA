#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=1; i<=n; i++){
        int val=1;
        for(int j=1; j<=(n*2 - 1); j++){
            if(j<=i || j>= (n*2) - i){
                cout<<val<<"\t";
            }else{
                cout<<"\t";
            }
            if(j<n){
                val++;
            }else{
                val--;
            }
        }
        cout<<"\n";
    }
}