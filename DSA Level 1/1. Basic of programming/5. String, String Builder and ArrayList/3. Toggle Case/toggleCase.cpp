#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str;

    getline(cin,str);

    int strSize = str.length();

    for(int i=0; i<strSize; i++){
        int ascii = (int)str[i];
        if(ascii < 97){
            ascii = 97 - (65 - ascii);
            cout<<(char)ascii;
        }else{
            ascii = 65 - (97 - ascii);
            cout<<(char)ascii;
        }
    }
    return 0;
}