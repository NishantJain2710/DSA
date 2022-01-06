#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int sp=1;
    int st=(n/2 + 1);

    for(int i=1; i<=n; i++){
        for(int j=0; j<st; j++){
            cout<<"*\t";
        }
        for(int j=0; j<sp; j++){
            cout<<"\t";
        }
        for(int j=0; j<st; j++){
            cout<<"*\t";
        }
        cout<<"\n";
        if(i<((n/2)+1)){
            sp+=2;
            st-=1;
        }else{
            sp-=2;
            st+=1;
        }
    }
    
}