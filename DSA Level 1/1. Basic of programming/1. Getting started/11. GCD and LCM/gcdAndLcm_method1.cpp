#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here
    int smallNum = num2;
    if(num1 < num2){
        smallNum = num1;
    }

    int grd=1;
    int lcm=1;
    for(int i=1; i<=smallNum; i++){
        if(num1%i==0 && num2%i==0){
            grd = i;
        }
    }
    int f1 = num1 / grd;
    int f2 = num2 / grd;

    cout<<grd<<"\n";
    lcm = grd*f1*f2;
    cout<<lcm;
}