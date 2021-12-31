#include<iostream>
#include<math.h>
using namespace std;

int getDifference(int b, int n1, int n2){
    // write your code here
    int result = 0;

    for(int i=0; ((n1>0)||(n2>0)); i++){
        
        int digit1 = n1 % 10;
        int digit2 = n2 % 10;
        

        n1 = n1 / 10;
        n2 = n2 / 10;

        if(digit2 < digit1){
            if( (n2 % 10) == 0){
                n2 = n2 - (10 - b);
            }
            n2 = n2 - 1;
            digit2 = digit2 + b;
        }

        int tempSub = digit2 - digit1;

        result = result + (tempSub * pow(10, i));
        
    }

    return result;
}


int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    cout<<getDifference(b,n1,n2);
}