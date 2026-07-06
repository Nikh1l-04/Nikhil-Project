#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
string Simplify(string str){
    vector<string> s;
    string st = "";
    str += "/";
    
    for(char ch : str){
        if(ch == '/'){
            if(st == ".."){
                if(!s.empty()){
                    s.pop_back(); 
                }
            } 
            else if(st != "" && st != "."){
                s.push_back(st); 
            }
            st = ""; 
        } else {
            st += ch;
        }
    }
    string ans = "";
    for(string dir : s) {
        ans += "/" + dir;
    }
    
    return ans.empty() ? "/" : ans;
}
int main(){
    string str  = "/home/user/../Doc/";
    string ans = Simplify(str);
    cout<<ans<<endl;
}
    