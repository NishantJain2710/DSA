#include<iostream>
#include<string>
#include<typeinfo>
#include<vector>
using namespace std;

static string codes[10] = {".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};

vector<string> getKPC(string s){
    //Write your code here
    if(s.length()==0){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    char ch = s[0];
    string ros = s.substr(1);
    vector<string> rres = getKPC(ros);
    vector<string> mres;
    
    string codeforch = codes[ch - '0'];
    for(int i=0; i<codeforch.length();i++){
        char chcode = codeforch[i];
        for (int j=0; j<rres.size(); j++){
            mres.push_back(chcode + rres[j]);
        }
    }
    return mres;
}


int main(){
    string s;
    cin >> s;
    vector<string> ans = getKPC(s);
    int cnt = 0;
    cout << '[';
    for (int i=0;i<ans.size();i++){
        if (cnt != ans.size() - 1)
            cout << ans[i] << ", ";
        else
            cout << ans[i];
        cnt++;
    }
    cout << ']';
}