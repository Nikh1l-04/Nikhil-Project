// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> solve( vector< int > vec , int tar , int n ){
//     int st = 0;
//     int end = n - 1;
//     for(int i = 0 ; i < n ; i++ ){
//         if(vec[st] + vec[end] == tar){
//             return {st + 1, end + 1};
//         }else if(vec[st] + vec[end] > tar){
//             end--;
//         }else{
//             st++;
//         }
//     }
// }
// int main(){
//     int n;
//     vector< int > vec ;
//     cout<<"Enter the number of element : ";
//     cin>>n;
//     for(int i = 0; i < n; i++ ){
//         int x ;
//         cin >> x ;
//         vec.push_back( x ) ;
//     }
//     int tar ;
//     cout << "Enter the target : " ;
//     cin >> tar;
//     vector<int> ans = solve( vec , tar , n );
//     cout << ans[0] << " " << ans[1];

// }