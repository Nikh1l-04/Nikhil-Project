#include<iostream>
#include<stack>
using namespace std;
int ScoreParen(string s){
    stack<int> st;
    int currScore = 0;
    for(char ch : s){
        if(ch == '('){
            st.push(currScore);
            currScore = 0;
        }else{
            int score = max(2* currScore , 1);
            currScore = st.top() + score;
            st.pop();
        }
    
    }
    return currScore;
}
int main(){
    string s = "(())";
    cout<<ScoreParen(s)<<endl;
}