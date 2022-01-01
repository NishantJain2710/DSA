#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> get_maze_paths(int sr, int sc, int dr, int dc) {
    //Write your code here
        if(sr == dr && sc == dc){
            vector<string> bres;
            bres.push_back("");
            return bres;
        }
        vector<string> mres;
        for(int i=1; i<=dc - sc; i++){
            vector<string> hpaths = get_maze_paths(sr,sc +i, dr,dc);
            for(int j=0; j<hpaths.size();j++){
                mres.push_back("h"+to_string(i)+hpaths[j]);
            }
        }

        for(int i=1; i<=dr - sr; i++){
            vector<string> vpaths = get_maze_paths(sr+i,sc, dr,dc);
            for(int j=0; j<vpaths.size();j++){
                mres.push_back("v"+to_string(i)+vpaths[j]);
            }
        }

        for(int i=1; i<=dr-sr && i<=dc-sc; i++){
            vector<string> dpaths = get_maze_paths(sr+i,sc+i, dr,dc);
            for(int j=0; j<dpaths.size();j++){
                mres.push_back("d"+to_string(i)+dpaths[j]);
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
    vector<string> ans = get_maze_paths(0,0,n-1,m-1);
    display(ans);

    return 0;
}