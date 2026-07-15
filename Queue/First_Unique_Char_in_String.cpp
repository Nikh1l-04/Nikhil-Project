#include<iostream>
#include<queue>
#include<unordered_map>
#include<string>
using namespace std;
int Unique(string str){
    unordered_map<char, int> mp;
    queue<int> Q;
    for(int i = 0; i < str.length() ; i++){
        if(mp.find(str[i]) == mp.end()){
            Q.push(i);
        }

        mp[str[i]]++;

        while(Q.size() > 0 && mp[str[Q.front()]] > 1){
            Q.pop();
        }

    }

    return (Q.empty() ? -1 : Q.front());
}
int main(){
    string str = "";
    cout<<Unique(str)<<endl;
    return 0;
}