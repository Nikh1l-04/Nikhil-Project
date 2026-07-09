#include<iostream>
#include<stack>
using namespace std;
int BasicCalc(string s){
    stack<char> num;
    stack<char> sign;
    int res = 0;
    int sig = 1;
    int currNum = 0;
    for(char ch  : s){
        if(isdigit(ch)){
            currNum = currNum * 10 + (ch - '0');
        }
        if(ch == '+'){
            res += sig * currNum;
            sig = 1;
            currNum = 0;
        }else if(ch == '-'){
            res += sig * currNum;
            sig = -1;
            currNum = 0;
        }
        if(ch == '('){
            num.push(res);
            res = 0;
            sign.push(sig);
            sig = 1;
        }else if(ch == ')'){
            res += sig * currNum;
            currNum = 0;
            

            res *= sign.top(); sign.pop();
            res += num.top(); num.pop();
        }
    }
    res += sig * currNum;
    return res;
}
int main(){
    string s = "1+(6-3+(7-2+(9+9)))+(10+1)";//38
    cout<<BasicCalc( s)<<endl;
    return 0;
}