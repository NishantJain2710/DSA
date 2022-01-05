#include<iostream>
#include<string.h>

using namespace std;

void printstr(string str)
{
   //write your code here
    int strSize = str.length();
    for(int i=0; i<strSize; i++){
        cout<<str[i];
        int diff = (int)str[i+1] - (int)str[i]; 
        if(i+1 != strSize){
            cout<<diff;
        }
    }
}
int main()
{
    string str;
    getline(cin,str);
    printstr(str);
    return 0;
}