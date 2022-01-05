#include <iostream>
#include<math.h>

int reverse(int n){
    int newNum = 0;
    int pos = 0;
    int div = 1;
    while(n/div > 10){
        div = div * 10;
        pos++;
    }
    while(n>0){
        int r = n%10;
        newNum = newNum + (r * pow(10,pos));
        pos--;
        n = n/10;
    }
    return newNum;
}

int rotate(int n, int k){
    int div = pow(10,k);

    int left = n % div;
    int right = n / div;

    left = reverse(left);
    right = reverse(right);

    int newNum = (right * div) + left;

    newNum = reverse(newNum);

    return newNum;
}
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;

    int pos = 1;
    int div = 1;
    while(n/div > 10){
        div = div * 10;
        pos++;
    }
    //write your code here
    // cout<<pos;
    if(k<0){
        k = k % pos;
        k = k + pos;
    }else if(k>0){
        k = k % pos;
    }
    cout<<rotate(n,k);
}