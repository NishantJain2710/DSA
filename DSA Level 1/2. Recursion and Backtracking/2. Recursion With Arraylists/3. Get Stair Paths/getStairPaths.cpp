#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> get_stair_paths(int n){
    //Write your code here

    if(n==0){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }else if(n<0){
        vector<string> bres{};
        return bres;
    }

    vector<string> paths1 = get_stair_paths(n-1);
    vector<string> paths2 = get_stair_paths(n-2);
    vector<string> paths3 = get_stair_paths(n-3);

    vector<string> mres;
    for(int i=0; i<paths1.size();i++){
        mres.push_back('1' + paths1[i]);
    }
    for(int i=0; i<paths2.size();i++){
        mres.push_back('2' + paths2[i]);
    }
    for(int i=0; i<paths3.size();i++){
        mres.push_back('3' + paths3[i]);
    }
    return mres;
}

int main(){
    int n;
    cin >> n;
    vector<string> ans = get_stair_paths(n);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}