#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool isPalin(string &word){
    string revWord = word;
    reverse(revWord.begin() , revWord.end());
    if(revWord == word){
        return true;
    }else{
        return false;
    }
}
void gap(vector<vector<string>>& ans, vector<string>& part,const string &s){
    if(s.length() == 0){//Base Case
        ans.push_back(part);
        return;
    }

    for(int i = 0 ; i < s.length() ; i++){
        string word = s.substr(0 , i + 1);
        
        if(isPalin(word)){
            part.push_back(word);
            gap(ans , part , s.substr(i + 1));
            part.pop_back();
        }
    }
}
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    vector<vector<string>> ans;
    vector<string> part;

    gap(ans, part ,s);
    cout<<"[";
    for(auto x : ans){
        cout<<"[";
        for(auto v : x){
            cout<<v<<" ";
        }
        cout<<" ]";
    }
    cout<<"]";
    return 0;
}