#include <iostream>
#include <string>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf){
    // write your code here
    if(ques.length()>=1){
        char ch = ques[0];
        string chforcodes = codes[ch-'0'];
        for(int i=0; i<chforcodes.length(); i++){
            printKPC(ques.substr(1),asf+chforcodes[i]);
            if(ques.length() == 1){
                cout<<asf+chforcodes[i]<<"\n";
            }
        }
    }
}

int main(){
    string str;
    cin >> str;
    printKPC(str, "");
}