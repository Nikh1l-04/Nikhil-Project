// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<unordered_map>
// using namespace std;
// vector<vector<string>> Anagram(vector<string> vec){
//     unordered_map<string , vector<string>> mp;

//     for(auto v : vec){
//         string temp = v;

//         sort(temp.begin(),temp.end());

//         mp[temp].push_back(v);
//     }

//     vector<vector<string>> ans;

//     for( auto pair : mp){
//         ans.push_back(pair.second);
//     }

//     return ans;
// }
// int main(){
//     vector<string> vec = {"tea", "eat" ,"bat", "nat", "ant", "ate","tan"};
//     vector<vector<string>> ans = Anagram(vec);
    
//     for(auto x : ans){
//         cout<<"[";
    
//         for(auto y : x){
//             cout<<y<<" ";
//         }
//         cout<<"]"<<endl;
//     }
// }