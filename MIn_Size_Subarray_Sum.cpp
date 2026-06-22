// #include<iostream>
// #include<vector>
// using namespace std;
// int MinSize(vector<int> vec , int tar){
//     int r = 0;
//     int l = 0;
//     int minS = INT_MAX;
//     int sum = 0;
//     while(r < vec.size() || sum >= tar){
        
        
//         if(sum >= tar){
//             minS = min(minS , r - l );
//             sum -= vec[l];
//             l++;
//         }else{
//             sum += vec[r];
//             r++;
//         }
        
//     }
//     return minS;

// }
// int main(){
//     vector<int> vec = {2,3,1,2,4,3};
//     cout<<"Enter the target : ";
//     int tar;
//     cin>>tar;
//     int ans = MinSize(vec , tar);
//     cout<<"~~~~~ "<<ans<<" ~~~~~";

//     return 0;
// }

 

