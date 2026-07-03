#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> Stock(vector<int> p){
    vector<int> ans;
    stack<int> s;

    for(int i = 0 ; i < p.size(); i++){
        while(s.size() > 0 && p[s.top()] <= p[i]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(i + 1);
        }else{
            ans.push_back(i - s.top());
        }
        s.push(i);
    }

    return ans;
}
int main(){
    vector<int> price = {100 , 80 , 60 , 70 , 60 , 75 , 85};
    vector<int> ans = Stock(price); 
    cout<<"[ ";
    for(auto st : ans){
        cout<<st <<" ";
    }
    cout<<" ]"<<endl;
    return 0;
}