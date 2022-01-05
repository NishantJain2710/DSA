#include<iostream>
#include<string>
#include<vector>
using namespace std;

int factorial(int n){
    int val = 1;
    for(int i=1; i<=n; i++){
        val = val * i;
    }
    return val;
}

void printallperm(string str){
    //write your code here
    int size = str.length();
    int f = factorial(size);
    
    for(int i=0; i<f; i++){
        vector<char> strTemp;
        for(int i=0; i<size; i++){
            strTemp.push_back(str[i]);
        }

        int temp = i;

        for(int div = size; div >= 1; div--){
            int q = temp / div;
            int r = temp % div;

            cout<<strTemp[r];
            strTemp.erase(strTemp.begin() + r);

            temp = q;
        }
        cout<<"\n";
    }
}
int main(){
    string str;
    getline(cin,str);
    
    printallperm(str);
}