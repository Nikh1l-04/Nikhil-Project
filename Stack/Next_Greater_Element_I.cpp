#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
vector<int> NGE_I(vector<int> n1 , vector<int>  n2){
    unordered_map<int , int> mp;
    stack<int> s;
    for(int  i = n2.size() - 1 ; i >= 0 ; i--){
        while(s.size() > 0 && n2[i] >= s.top()){
            s.pop();
        }
        if(s.empty()){
            mp[n2[i]] = -1;
        }else{
            mp[n2[i]] = s.top();
        }
        s.push(n2[i]);
    }

    vector<int> ans ;
    for(int i = 0 ; i < n1.size() ; i++){
        ans.push_back(mp[n1[i]]);
    }

    return ans;
}
int main(){
    vector<int> n1 = { 4 , 1 , 2};
    vector<int> n2 = {1 , 3 , 4 , 2};
    vector<int> ans = NGE_I(n1, n2);
    cout<<" Nums1 -> [ ";
    for(int num : n1 ){
        cout<<num<<" ";
    }
    cout<<"]"<<endl;

    cout<<" Nums2 -> [ ";
    for(int num : n2 ){
        cout<<num<<" ";
    }
    cout<<"]"<<endl;

    cout<<" Answer -> [ ";
    for(int num : ans ){
        cout<<num<<" ";
    }
    cout<<"]"<<endl;

    return 0;
}