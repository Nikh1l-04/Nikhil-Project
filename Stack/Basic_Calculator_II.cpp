#include<iostream>
#include<stack>
using namespace std;
int BasicCalc(string s){
    stack<long long> num;
    long long currNum = 0;
    char  lt = '+';
    for(int i = 0; i < s.length() ; i++){
        char ch = s[i];
        if(isdigit(ch)){
            currNum = currNum * 10 + (ch - '0');
        }
        if(( !isdigit(ch) && ch != ' ') || i == s.length() - 1){

            if(lt == '+'){
                num.push(currNum);
            }else if(lt == '-'){
                num.push(-currNum);
            }else if(lt == '*'){
                int topVal = num.top();
                num.pop();
                num.push(topVal * currNum);
            }else if(lt == '/'){
                int topVal = num.top();
                num.pop();
                num.push(topVal / currNum);
            }

            lt = ch;
            currNum = 0;
        }
    }

    int res = 0;
    while(!num.empty()){
        res += num.top();
        num.pop();
    }

    return res;
}
int main(){
    string s = "3+2*2";
    cout<<BasicCalc(s)<<endl;
    return 0;
}