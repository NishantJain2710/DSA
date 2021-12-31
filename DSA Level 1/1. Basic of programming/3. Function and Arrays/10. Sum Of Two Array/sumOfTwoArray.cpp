#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cin>>n1;
    int* a1 = new int[n1];
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    int* a2 = new int[n2];
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }
    
    //write your code here
    int* sum = new int[n1>n2 ? n1 : n2];

    int carry = 0;

    int i = n1-1;
    int j = n2-1;
    int k = n1 > n2 ? n1-1 : n2-1;
    
    while(k>=0){
        int digit = carry;

        if(i >= 0){
            digit = digit + a1[i];
        }

        if(j >= 0){
            digit = digit + a2[j];
        }

        carry = digit / 10;
        digit = digit % 10;

        sum[k] = digit;

        i--;
        j--;
        k--;
    }
    if(carry != 0){
        cout<<carry<<"\n";
    }

    for(int i=0; i<(n1 > n2 ? n1 : n2); i++){
        cout<<sum[i]<<"\n";
    }
}