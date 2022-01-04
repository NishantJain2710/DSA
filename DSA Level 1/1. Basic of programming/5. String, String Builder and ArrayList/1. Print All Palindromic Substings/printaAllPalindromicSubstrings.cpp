#include<iostream>
#include<string.h>
using namespace std;
void printallpalindrome(string str)
{
  //write your code here
    int strSize = str.length();
    for(int i=0; i<strSize; i++){
        for(int j=1; j<=strSize-i; j++){
            string tempStr = str.substr(i,j);
            int substrlen = tempStr.length();
            int flag = 0;
            for(int k=0, l=substrlen-1; k<substrlen/2; k++,l--){
                if(tempStr[k] != tempStr[l]){
                    flag = 1;
                }
            }
            if(flag == 0){
                cout<<tempStr<<"\n";
            }
        }
    }
}

int main()
{
    string str;
    getline(cin,str);
    printallpalindrome(str);
    return 0;
}