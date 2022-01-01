#include<bits/stdc++.h>
using namespace std;

    // set is the subset
    // sos is sum of subset
    // tar is target
  void printTargetSumSubsets(vector<int>& arr, int idx, string set, int sos, int tar){

    if(arr.size() == idx){
        if(sos == tar){
            cout<<set<<". \n";
        }
      return;
    }

    printTargetSumSubsets(arr, idx+1, set+to_string(arr[idx])+", ", sos+arr[idx], tar);
    printTargetSumSubsets(arr, idx+1, set, sos, tar);
  }


int main(){
  int n;
  cin>>n;

  vector<int> arr;
  int tar;

  for(int i=0; i<n; i++){
    int temp;
    cin>>temp;
    arr.push_back(temp);
  }
  cin>>tar;

  printTargetSumSubsets(arr, 0, "", 0, tar);

}