#include <iostream>
#include <vector>
using namespace std;

vector<int> allIndex(vector<int>& arr, int idx, int data, int count){
   
    if(arr.size() == idx){
        vector<int> bres;
        return bres;
    }
    vector<int> mres;
    if(arr[idx]==data){
        mres.push_back(idx);
    }
    vector<int> res = allIndex(arr,idx+1,data,count);
    mres.insert(mres.end(),res.begin(),res.end());
    return mres;
}
int main() {
  int n ;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    arr.push_back(d);
  }
  int data;
  cin >> data;
  vector<int> ans = allIndex(arr, 0, data, 0);
  if (ans.size() == 0) {
    cout << endl;
    return 0;
  }
  for (int ele : ans) cout << ele << endl;

  return 0;
}