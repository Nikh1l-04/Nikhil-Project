#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
string Decode(string s){
    stack<int> num;
    stack<string> str;
    int n = 0;
    string res = "";
    for(auto ch : s){
        if(ch == '['){
            num.push(n);
            n = 0;
            str.push(res);
            res = "";
        }else if(ch == ']'){
            int count = num.top();
            num.pop();
            string pre = str.top();
            str.pop();
            string rep = "";
            while(count--){
                rep += res;
                
            }

            res = rep + pre;
        }else if(isdigit(ch)){
            n = n*10 + (ch - '0');
        }else{
            res += ch;
        }
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    string s = "2[a3[b]]";
    string ans = Decode(s);

    cout<<ans<<endl;
}