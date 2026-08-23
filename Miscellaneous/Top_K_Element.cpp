#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<int> count(vector<int> nums, int k){
    vector<int> ans ;
    unordered_map<int , int > mp;
    for(int i : nums){
        if(mp.count(i)){

            mp[i]++;
        }else{
            mp[i] = 1;
            ans.push_back(i);
        }
        
    }
    vector<int> vec;
    for(int i = 0 ; i < mp.size() ; i++){
        vec.push_back(ans[i]);
    }
    sort(vec.begin(), vec.end(), [&](int a, int b) {
        return mp[a] > mp[b];
    });
    while (vec.size() > k) {
        vec.pop_back();
    }

    return vec;
}
int main(){
    vector<int> nums = {3,0,1,0};
    int k = 1;
    vector<int > ans = count(nums , k);
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}