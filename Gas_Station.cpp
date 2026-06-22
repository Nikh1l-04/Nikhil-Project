// #include<iostream>
// #include<vector>
// using namespace std;
// int Station(vector<int>& cost, vector<int>& gas){
//     int sgas = 0, scost = 0;
//     int sum = 0, idx = 0;
//     for(int i = 0; i < gas.size(); i++){
//         sgas += gas[i];
//         scost += cost[i];

//         sum += gas[i] - cost[i];

//         if(sum < 0){
//             idx = i + 1;
//             sum = 0;
//         }
//     }

//     if(sgas < scost){
//         return -1;
//     }

//     return idx;
    
// }
// int main(){
//     vector<int> cost = {3,4,5,1,2};
//     vector<int> gas = {1,2,3,4,5};
//     int ans = Station(cost , gas);
//     cout<<"~~~~~ "<<ans<<" ~~~~~";
// }