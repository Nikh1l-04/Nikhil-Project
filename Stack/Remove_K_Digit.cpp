#include<iostream>
#include<string>
using namespace std;

string RemoveK(string str, int k){
    string s = "";
    for(char ch : str){
        while(k > 0 && !s.empty() && ch < s.back()){
            s.pop_back();
            k--;
        }
        s.push_back(ch);
    }

    while(k > 0 && !s.empty()){
        s.pop_back();
        k--;
    }

    int idx = 0;
    while(idx < s.length() && s[idx] == '0'){
        idx++;
    }

    string ans = s.substr(idx);

    return ans.empty() ? "0" : ans;
}

int main(){
    int k = 3;
    string str = "1234";
    string ans = RemoveK(str , k);
    cout<<str<<endl;
    cout<<ans<<endl;

    return 0;
}