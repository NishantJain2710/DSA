#include <iostream>
#include<string>
using namespace std;

void printEncoding(string str, string asf){
    // write your code here
    if(str.length()==0){
        cout<<asf<<'\n';
        return;
    }else if(str.length()==1){
        char ch = str[0];
        if(ch=='0'){
            return;
        }else{
            int chv = ch - '0';
            char code = (char)('a' + chv-1);
            cout<<asf+code<<'\n';
        }
    }else{
        char ch = str[0];
        string ros = str.substr(1);

        if(ch=='0'){
            return;
        }else{
            int chv = ch - '0';
            char code = (char)('a' + chv-1);
            printEncoding(ros,asf+code);
        }
        string ch12 = str.substr(0,2);
        string ros12 = str.substr(2);

        int ch12v = stoi(ch12);
        if(ch12v<=26){
            char code = (char)('a' + ch12v-1);
            printEncoding(ros12,asf+code);
        }
    }
}

int main(){
    string str;
    cin>>str;
    printEncoding(str,"");
    
}