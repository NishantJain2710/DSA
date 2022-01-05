#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    
    int per, base, height;
    //write your code here
    if(a > b && a > c){
        per = a;
        base = b;
        height = c;
    }else if(b > a && b > c){
        per = b;
        base = a;
        height = c;
    }else if (c > a && c > b){
        per = c;
        base = b;
        height = a;
    }

    int sqper = per * per;
    int sqbas = base * base;
    int sqhei = height * height;

    if(sqper == sqbas + sqhei){
        cout<<"true";
    }else{
        cout<<"false";
    }


}