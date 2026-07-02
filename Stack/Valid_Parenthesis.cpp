#include<iostream>
#include<stack>
using namespace std;
bool ValidParen(string st){
    stack<char> s;

    for(auto str : st){
        if(str == '(' || str == '{' || str == '['){
            s.push(str);
        }else{
            if(s.empty()){
                return false;
            }
            if(str == ')' && s.top() == '(' ||
            str == ']' && s.top() == '[' ||
            str == '}' && s.top() == '{' ){
                s.pop();
            }else{
                return false;
            }
        }
    }
    
    return s.empty();
}
int main(){

    string st;
    cout<<"Enter the input : ";
    cin>>st;

    bool ans = ValidParen(st);
    cout<<(ans?"True" : "False");

    cout<<endl;

}