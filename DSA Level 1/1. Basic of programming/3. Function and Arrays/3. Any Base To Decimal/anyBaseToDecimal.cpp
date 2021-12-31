#include<iostream>
#include<math.h>
using namespace std;
int AnyToDec(int n,int b){
//write your code here.
    int number;
    for(int i = 0; n!=0 ; i++){
        number = number + ((n%10) * pow(b,i));
        n = n/10;
    }
    return number;
}
int main(){
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = AnyToDec(n,b);
    cout<<res<<endl;
}