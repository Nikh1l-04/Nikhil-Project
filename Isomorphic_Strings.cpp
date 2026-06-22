#include<iostream>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;
bool Isomorphic(string a, string b){
    if(a.length() != b.length()){//Edge case 
        return false;
    }

    unordered_map<char, char> mp;
    unordered_set<char> se;
    for(int i = 0; i < a.length() ; i++){
        if(!mp.count(a[i])){
            if(se.count(b[i]) > 0){//many one function
                return false;
            }
            mp[ a[ i ] ] = b[ i ];
            se.insert(b[ i ]);
        }else{
            if(mp[ a[ i ] ] != b[ i ]){
                return false;
            }
        }
    }

    return true;
}
int main(){
    string a ,b;
    cout<<"Enter the First string : ";
    cin>>a;

    cout<<"Enter the Second String : ";
    cin>>b;

    bool ans = Isomorphic(a , b);
    
    cout<<"~~~~~ "<<(ans ? "True" : "False")<<" ~~~~~";
    return 0;
}