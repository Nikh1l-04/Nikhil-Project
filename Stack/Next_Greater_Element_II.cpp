#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> NGE_II(vector<int> vec){
    int n = vec.size();
    vector<int> ans(n);
    stack<int> s;
    
    for(int i = 2*n - 1; i >= 0; i--){
        while(!s.empty() && vec[s.top()] <= vec[i%n]){
            s.pop();
        }
        ans[i % n] = s.empty() ? -1 :vec[s.top()];
        s.push(i % n);
    }
    return ans;
}
int main(){
    vector<int> vec = {3,6,5,4,2};
    vector<int> ans = NGE_II(vec);
    cout<<"[";
    for(auto x : ans){
        cout<<x<<" ";
    }
    cout<<"]"<<endl;
}