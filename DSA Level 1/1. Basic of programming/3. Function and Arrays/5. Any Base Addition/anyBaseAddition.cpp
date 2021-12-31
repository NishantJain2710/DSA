#include<iostream>
#include<math.h>

using namespace std;

int getSum(int b, int n1, int n2) {
    // write your code here
    int number = 0;

    for(int i=0; (n1>0 || n2>0) ; i++){
        int digit1 = n1%10;
        int digit2 = n2%10;

        n1 = n1/10;
        n2 = n2/10;

        int tempSum = digit1 + digit2;

        int rem = tempSum % b;
        int quest = tempSum / b;

        n1 = n1 + quest;

        number = number + (rem * pow(10, i));
    }
    return number;
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}