#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

void removeprimes(vector<int> v){
    //write your code here
    int size = v.size()-1;
    for(int i=size; i>=0; i--){
        int val = v[i];

        if(isPrime(v[i])){
            v.erase(v.begin() + i);
        }
    }

    size = v.size();
    cout<<"[";
    for(int i=0; i<size; i++){
        cout<<v[i];
        if(i+1 != size){
            cout<<", ";
        }
    }
    cout<<"]";
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    removeprimes(v);
}