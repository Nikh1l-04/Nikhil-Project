#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(int row, int col , vector<vector<int>> &vis , vector<vector<char>> &grid){
    vis[row][col] = 1;
    queue<pair<int,int>> q;
    q.push({row, col});
    int  m = grid.size();
    int n = grid[0].size();

    int dr[] = {0,0,1,-1};
    int dc[] = {1,-1,0,0};

    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;

        q.pop();
        for(int k = 0; k < 4; k++){
            int nrow = r + dr[k];
            int ncol = c + dc[k];

            if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n 
            && grid[nrow][ncol] == '1' && vis[nrow][ncol] == 0){
                vis[nrow][ncol] = 1;
                q.push({nrow , ncol});
            }
        }
    }
}
int numIsland(vector<vector<char>> grid){
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> vis(m , vector<int>(n ,0));
    int count = 0;
    for(int row = 0 ; row < m ; row++){
        for(int col = 0 ; col < n ; col++){
            if(vis[row][col] == 0 && grid[row][col] == '1'){
                count++;
                BFS(row,col,vis,grid);
            }
        }
    }

    return count;
}
int main(){
    vector<vector<char>> grid = {{'1','1','0'},{'0','1','0'},{'0','0','1'}};
    cout<<numIsland(grid)<<endl;
    return 0;
}