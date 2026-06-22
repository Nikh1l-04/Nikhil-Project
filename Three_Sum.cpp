// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<vector<int>> ThreeSum(vector< int > vec , int n ){
//     sort(vec.begin(),vec.end());
//     vector<vector<int>> result;
//     for(int i = 0 ; i < n ; i++ ){
//         int st = i + 1;
//         int end = n - 1;
//         while(end > st){
//             int sum = vec[i] + vec[st] + vec[end] ;
//             if( sum == 0){
//                 result.push_back({vec[i] , vec[st] , vec[end]});
//                 st++; end--;
//                 while(st < end && vec[st] == vec[st - 1]){
//                     st++;
//                 }
//                 while(st < end && vec[end] == vec[end + 1]){
//                     end--;
//                 }
                
//             }else if(sum < 0){
//                 st++;
//             }else{
//                 end--;
//             }
//         }
//     }
//     return result;
// }
// int main(){
//     vector< int > vec ;
//     cout<<"Enter the number of element : ";
//     int n;
//     cin>>n;
//     for(int i = 0; i < n; i++ ){
//         int x ;
//         cin >> x ;
//         vec.push_back( x ) ;
//     }
//     vector<vector<int>> result = ThreeSum(vec,n);
//     cout<<"[";
//     for( auto st : result){
//         cout<<" [";
//         for(auto v : st){
//             cout<<v<<" ";
//         }
//         cout<<"]";
//     }
//     cout<<"]";
// }