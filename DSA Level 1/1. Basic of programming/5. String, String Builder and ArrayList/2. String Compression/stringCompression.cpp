#include<iostream>
#include<string.h>
using namespace std;


void String_compression01(string str)
{
   //write your code here
    int strSize = str.length(); 
    for(int i=0; i<strSize; i++){
        if(str[i] != str[i-1]){
                cout<<str[i];
        }
    }
    cout<<"\n";
}
void String_compression02(string str)
{
   //write your code here
    int strSize = str.length(); 
    int count = 1;
    for(int i=0; i<strSize; i++){
        if(str[i] != str[i-1]){
            if(count > 1){
                cout<<count;
            }
            cout<<str[i];
            count=1;
        }else{
            count++;
        }

        if(i+1 == strSize){
            if(count > 1){
                cout<<count;
            }
        }
    }
}

int main()
{
    string str;
    getline(cin,str);
    String_compression01(str);
    String_compression02(str);
}