#include <iostream>
#include <string>
using namespace std;

void printPermutations(string str, string asf){
    // write your code here
    if(str.length()==0){
        cout<<asf<<'\n';
        return;
    }
    for(int i=0; i<str.length(); i++){
        if(i==0){
            printPermutations(str.substr(1),asf+str[i]);
        }else{
            printPermutations(str.substr(0,i)+str.substr((i+1)),asf+str[i]);
        }
    }
}

int main(){
    string str;
    cin>>str;
    printPermutations(str,"");
    
}