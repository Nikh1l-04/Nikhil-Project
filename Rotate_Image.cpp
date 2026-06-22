// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<vector<int>> Image(vector<vector<int>> ans){
//     int n = ans.size();
//     for(int i = 0 ; i < n ; i++){
        
//         for(int j = i + 1 ; j < n ; j++ ){
            
//             swap(ans[i][j], ans[j][i]);
//         }
//     }

//     for(int i = 0 ; i < n ; i++ ){
//         reverse(ans[i].begin(), ans[i].end());
//     }
//     return ans;
// }
// int main(){
//     vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
//     vector<vector<int>> ans = Image(vec);
    
//     for(auto a : ans){
//         cout<<"[ ";
//         for(auto v : a){
//             cout<<v<< " ";
//         }
//         cout<<"]"<<endl;
//     }
    

//     return 0;
// }