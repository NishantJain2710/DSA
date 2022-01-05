#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here
    int divisor = num2;
    int dividend = num1;

    if(num1 < num2){
        divisor = num1;
        dividend = num2;
    }

    int quest, rem;

    while(rem!=0){
        rem = dividend % divisor;
        quest = dividend / divisor;

        if(rem != 0){
            dividend = divisor;
            divisor = rem;
        }
    }

    int gcd = divisor;
    int lcm = (num1 * num2) / gcd;

    cout<<gcd<<"\n"<<lcm;
}