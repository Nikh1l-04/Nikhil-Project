// #include<iostream>
// #include<vector>
// using namespace std;
// bool Jump(vector<int> vec){

//     int mxr = 0;
//     int n = vec.size() - 1;
//     for(int  i = 0 ; i <= n ; i++ ){
//         if(i > mxr){
//             return false;
//         }
//         mxr = max(mxr , i + vec[i]);
//         if(mxr >= n){
//             return true;
//         }
//     }
// }
// int main(){
//     vector<int> vec = {2,3,1,1,4};
//     bool ans = Jump(vec);
//     cout<<ans;
// }