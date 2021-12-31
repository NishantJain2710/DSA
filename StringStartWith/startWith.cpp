#include<iostream>

using namespace std;

class StartWith{
    bool result;
    string text;
    public:

    StartWith(){
        text = "java string split method by javatpoint";
    }
    bool startWith(string str){
        int strLength = str.length();
        if(strLength <= text.length()){
            for(int i=0 ; i<strLength; i++){
            if(text[i] != str[i]){
                return false;
            }
        }
        return true;
        }else{
            return false;
        }
        
    }
};

int main(){
    StartWith s1;
    string str;
    cin>>str;
    bool result = s1.startWith(str);
    cout<<result;
    return 0;
}