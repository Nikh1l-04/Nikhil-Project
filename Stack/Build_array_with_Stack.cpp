#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<string> BuildArray(int n, vector<int> tar ){
    vector<string> ans;
    stack<int> st;
    int idx = 0 ;
    for(int i = 1; i <= n ; i++){
        st.push(i);
        ans.push_back("Push");
        if(i == tar[idx]){
            idx++;
        }else{
            st.pop();
            ans.push_back("Pop");
        }
        if(idx == tar.size()){
            break;
        }
    }
    return ans;
    
}

int main(){
    int n = 3;
    vector<int> tar = {1,2,3};
    vector<string> ans = BuildArray(n , tar);
    cout<<"[ ";
    for(string s : ans ){
        cout<<s<<" ";
    }
    cout<<"]"<<endl;
    
    
}