#include<iostream>
#include<vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
    if(sc==dc && sr==dr){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }

    vector<string> mres;
    
    if(sc+1<=dc){
        vector<string> vpaths = getMazePaths(sr,sc+1,dr,dc);
        for(int i=0;i<vpaths.size();i++){
            mres.push_back("h"+vpaths[i]);
        }
    }
    if(sr+1<=dr){
        vector<string> hpaths = getMazePaths(sr+1, sc, dr, dc);
         for(int i=0;i<hpaths.size();i++){
            mres.push_back("v"+hpaths[i]);
        }
    }
    
    return mres;
}

void display(vector<string>& arr){
    cout << "[";
    for(int i = 0;i < arr.size();i++){
        cout << arr[i];
        if(i < arr.size() -1) cout << ", ";
    }
    
    cout << "]"<<endl;
}


int main() {
    int n,m; cin >> n >> m;
    vector<string> ans = getMazePaths(1,1,n,m);
    display(ans);

    return 0;
}