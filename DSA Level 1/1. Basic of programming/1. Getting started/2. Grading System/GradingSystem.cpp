#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;

    if(marks > 90){
        cout<<"excellent";
    }else if(80 < marks && marks <= 90){
        cout<<"good";
    }else if(70 < marks && marks <= 80){
        cout<<"fair";
    }else if(60 < marks && marks <= 70){
        cout<<"meets expectations";
    }else if(marks <= 60){
        cout<<"below par";
    }
    return 0;
}