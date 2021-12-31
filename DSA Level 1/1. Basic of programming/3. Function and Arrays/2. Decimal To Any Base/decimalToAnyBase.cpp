#include<iostream>
#include <math.h>

using namespace std;

int DecToAny(int n, int b){
//write your code here
    int number;
    for(int i = 0; n!=0 ; i++){
        number = number + ((n%b) * pow(10,i));
        n = n/b;
    }
    return number;
}
int main(){
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = DecToAny(n,b);
    cout << res << endl;
}