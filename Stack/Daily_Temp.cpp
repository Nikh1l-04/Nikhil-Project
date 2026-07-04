#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> DailyTemp(vector<int> temp){
    stack<int> s;
    vector<int> ans(temp.size());
    for(int  i = temp.size() - 1 ; i >= 0 ; i--){
        while(s.size() > 0 && temp[i] >= temp[s.top()]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = 0;
        }else{
            ans[i] =  s.top() - i;
        }
        s.push(i);
    }

    return ans;
}
int main(){
    vector<int> temp = {73,74,75,71,69,72,76,73};
    vector<int> ans = DailyTemp(temp);

    cout<<"Temperature ->  [ ";
    for(auto s : temp ){
        cout<<s<<" ";
    }
    cout<<"]"<<endl<<endl;


    cout<<"[ ";
    for(auto s : ans ){
        cout<<s<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}