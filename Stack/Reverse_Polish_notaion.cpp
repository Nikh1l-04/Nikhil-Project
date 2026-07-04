#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int RPN(vector<string> tok){
    stack<int> s;
    for(string str : tok){
        if(str == "*" || str == "+" || str == "-" || str == "/"){
            int sec = s.top();
            s.pop();
            int fir = s.top();
            s.pop();

            if(str == "*"){
                s.push(fir * sec);
            }else if(str == "+"){
                s.push(fir + sec);
            }else if(str == "-"){
                s.push(fir - sec);
            }else if(str == "/"){
                s.push(fir / sec);
            }
        }else{
            s.push(stoi(str));
        }
    }
    return s.top();
}
int main(){
    vector<string> tok = {"4" , "13" , "5" , "/" , "+"};
    int ans = RPN(tok);
    cout<<"~~~~~"<<ans<<"~~~~~"<<endl;
}