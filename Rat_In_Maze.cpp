// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// void RatMaze(vector<vector<int>> &mat, int  r , int c, vector<string> &ans , string str){
//     int n = mat.size();
//     if(c < 0 || r < 0 || c >= n || r >= n || mat[r][c] == 0 || mat[r][c] == -1){
//         return ;
//     }
//     if(r == n - 1 && c == n - 1){
//         ans.push_back(str);
//         return;
//     }
//     mat[r][c] = -1;
//     RatMaze(mat , r - 1 , c , ans , str + "U");//UP
//     RatMaze(mat , r + 1 , c , ans , str + "D");//DOWN
//     RatMaze(mat , r , c + 1 , ans , str + "R");//RIGHT
//     RatMaze(mat , r , c - 1 , ans , str + "L");//LEFT
//     mat[r][c] = 1;
// }
// vector<string> Helper(vector<vector<int>> &mat){
//     vector<string> ans;
//     string str = "";
//     RatMaze(mat,0,0,ans,str);
//     return ans;
// }
// int main(){
//     vector<vector<int>> mat = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
//     vector<string> answer = Helper(mat);
//     cout<<"[";
//     for( auto v : answer ){
//         cout << v <<" ";
//     }
//     cout<<"]";

// }
// // #include <iostream>
// // #include <vector>
// // #include <string> // Added missing header

// // using namespace std;

// // // Passed mat by reference (&mat) to allow back-tracking changes to persist
// // void RatMaze(vector<vector<int>> &mat, int r, int c, vector<string> &ans, string str) {
// //     int n = mat.size();
    
// //     // Boundary check and obstacle/visited cell verification
// //     if (c < 0 || r < 0 || c >= n || r >= n || mat[r][c] == 0 || mat[r][c] == -1) {
// //         return;
// //     }
    
// //     // Destination reached
// //     if (r == n - 1 && c == n - 1) {
// //         ans.push_back(str);
// //         return;
// //     }
    
// //     // Mark cell as visited (Changed == to =)
// //     mat[r][c] = -1;
    
// //     // Recursive moves with correct direction tags
// //     RatMaze(mat, r + 1, c, ans, str + "D"); // DOWN
// //     RatMaze(mat, r - 1, c, ans, str + "U"); // UP
// //     RatMaze(mat, r, c + 1, ans, str + "R"); // RIGHT
// //     RatMaze(mat, r, c - 1, ans, str + "L"); // LEFT
    
// //     // Backtrack and restore cell state (Changed == to =)
// //     mat[r][c] = 1;
// // }

// // vector<string> Helper(vector<vector<int>> mat) {
// //     vector<string> ans;
// //     string str = "";
// //     RatMaze(mat, 0, 0, ans, str);
// //     return ans;
// // }

// // int main() {
// //     vector<vector<int>> mat = {
// //         {1, 0, 0, 0},
// //         {1, 1, 0, 1},
// //         {1, 1, 0, 0},
// //         {0, 1, 1, 1}
// //     };
    
// //     vector<string> answer = Helper(mat);
    
// //     cout << "[ ";
// //     for (auto v : answer) {
// //         cout << v << " ";
// //     }
// //     cout << "]";
    
// //     return 0;
// // }
