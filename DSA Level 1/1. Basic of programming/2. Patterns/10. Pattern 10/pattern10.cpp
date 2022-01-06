#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int lst = n/2;
    int rst = n/2;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==lst || j==rst){
                cout<<"*\t";
            }else{
                cout<<"\t";
            }
        }
        cout<<"\n";
        if(i<n/2){
            rst++;
            lst--;
        }else{
            rst--;
            lst++;
        }
    }
}