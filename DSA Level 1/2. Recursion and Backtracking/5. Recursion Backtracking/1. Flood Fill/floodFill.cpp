#include<iostream>
#include<vector>

using namespace std;

void floodfill(vector<vector<int>> &maze, int row, int col, string psf, vector<vector<bool>> &isVisited) {
    if(row < 0 || col < 0 || row > maze.size() - 1 || col > maze[0].size() - 1 || maze[row][col]==1 || isVisited[row][col] == true){
        return;
    }

    if(row == maze.size()-1 && col == maze[0].size()-1){
        cout<<psf<<'\n';
        return;
    }

    isVisited[row][col] = true;
    floodfill(maze, row-1, col , psf+"t" , isVisited);
    floodfill(maze, row, col-1 , psf+"l" , isVisited);
    floodfill(maze, row+1, col , psf+"d" , isVisited);
    floodfill(maze, row, col+1 , psf+"r" , isVisited);
    isVisited[row][col] = false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector < vector < int >> arr(n, vector < int > (m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    vector<vector<bool>> visited (n, vector<bool>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            visited[i][j] = false;

    floodfill(arr,0,0,"",visited);
}