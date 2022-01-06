#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    //write your code here
    int val = (n/2) + 1; 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int aml = n/2;
            int bml = (n+1)/2;
            if((i<=aml && j<=aml) || (i>bml && j<=aml)){
                cout<<"\t";
            }else{
                if(j<=val){
                    cout<<"*\t";
                }
            }
        }
        if(i<= n/2){
            val++;
        }else{
            val--;
        }
        cout<<"\n";
    }
    
}