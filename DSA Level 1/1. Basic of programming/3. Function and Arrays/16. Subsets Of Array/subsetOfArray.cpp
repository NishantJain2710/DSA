#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){
    int n; 
    cin>>n;

    int* arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int limit = pow(2, n);

    for(int i=0; i<limit; i++){
        string str = "";
        int temp = i;

        for(int j=n-1; j>=0; j--){
            int r = temp % 2;
            temp = temp / 2;

            if(r == 0){
                str = "-\t" + str;
            }else{
                str = to_string(arr[j]) + "\t" + str;
            }
        }
        cout<<str<<"\n";
    } 
}