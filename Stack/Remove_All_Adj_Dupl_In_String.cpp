#include<iostream>
#include<stack>
#include<cmath>
#include<algorithm>
using namespace std;
string Remove_Dupl( string str){
    stack<char> s;
    for(char c : str){
        if(!s.empty() && c == s.top()){
            s.pop();
        }else{
            s.push(c);
        }
    }
    string ans = "";
    while(!s.empty()){
        ans += s.top();
        s.pop();
    }
    reverse(ans.begin() , ans.end());

    return ans;
}
int main(){
    string str;
    cout<<"Enter the String : ";
    cin>> str;
    string ans = Remove_Dupl(str);
    cout<<str<<endl;
    cout<<ans<< endl;

    return 0;

}