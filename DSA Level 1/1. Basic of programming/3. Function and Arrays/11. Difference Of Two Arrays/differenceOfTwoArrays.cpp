#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n1, n2;
    
    cin>>n1;
    vector<int> a1(n1, 0);
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    vector<int> a2(n2, 0);
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }
    
    //write your code here

    int i = n1-1;
    int j = n2-1;
    vector<int> sub;

    while(j>=0){
        int digit = a2[j];

        if(i>=0){
            if(digit < a1[i]){
                digit = digit + 10;

                int ptr = j;
                while(a2[ptr - 1] == 0){
                    a2[ptr - 1] = 9;
                    ptr--;
                }

                a2[ptr-1] = a2[ptr-1] - 1;

                digit = digit - a1[i];
            }else{
                digit = digit - a1[i];
            }
        }

        sub.push_back(digit);

        i--;
        j--;
    }

    for(int i=sub.size()-1; i>=0; i--){
        if(sub[i] == 0){
            sub.pop_back();
        }else{
            break;
        }
    }

    for(int i=sub.size()-1; i>=0; i--){
        cout<<sub[i]<<"\n";
    }
}