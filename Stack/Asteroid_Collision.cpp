#include<iostream>
#include<vector>
using namespace std;
vector<int> Aesteroid(vector<int> asteroid){
    vector<int> st;
    for(int ast : asteroid){
        bool des = false;

        while(!st.empty() && ast < 0 && st.back() > 0){

            if(st.back() < abs(ast)){
                st.pop_back();
                continue;
            }else if(st.back() == abs(ast)){
                st.pop_back();
                des = true;
                break;
            }else{
                des = true;
                break;
            }
            
        }
        if(!des){
                st.push_back(ast);
            }
        
    }
    return st;
}
int main(){
    vector<int> vec = {5,10,-5};
    vector<int> ans = Aesteroid(vec);
    cout<<"[";
    for(int s : ans){
        cout<<s<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}