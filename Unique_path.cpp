// #include<iostream>
// #include<vector>
// using namespace std;
// void helper(int row ,int col, int r , int d , int& count ){
//     if(r == col - 1 && d == row - 1){
//         count++ ;
//         return;
//     }
//     if(r < row){
//         helper(row, col, r +1, d, count);
//     }
//     if(d < col){
//         helper(row, col, r, d + 1, count);
//     }
// }
// int Unique(int row , int col){
//     int r = 0, d = 0;
//     int count = 0;
//     helper(row, col, r, d, count);
//     return count; 
// }
// int main(){
//     int row;
//     cout<<"Enter the Number of row : ";
//     cin>>row;
//     int col;
//     cout<<"Enter the Number of column : ";
//     cin>>col;
//     int ans = Unique(row , col);
//     cout<<"Number of Unique Paths : "<<ans;
//     return 0;
// }