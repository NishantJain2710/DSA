#include<iostream>
// #include<math.h>
using namespace std;

int pow(int number, int power){
    int ans = 1;
    while(power != 0){
        power--;
        ans = ans * number;
    }
    return ans;
}

int AnyToDecimal(int n, int b){
    int number = 0;
    for(int i=0; n!=0; i++){
        int reminder = n%10;
        number = number + (reminder * pow(b,i));
        n = n/10;
    }
    return number;
}

int DecimalToAny(int n, int b){
    int number = 0;
    for(int i=0; n!=0; i++){
        int reminder = n%b;
        number = number + (reminder * pow(10,i));
        n = n/b;
    }
    return number;
}

int AnyToAny(int n, int b1, int b2){
    //write your code here
    int anyToDecimal = AnyToDecimal(n,b1);
    int decimalToAny = DecimalToAny(anyToDecimal, b2);

    return decimalToAny;
}
int main(){
    int n;
    int b1;
    int b2;
    cin >> n;
    cin >> b1;
    cin >> b2;
    int res = AnyToAny(n,b1,b2);
    cout << res <<endl;
}