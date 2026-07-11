#include<iostream>
#include<vector>
using namespace std;
string RemoveDupl(string s ,int  k){
    vector<int> count(s.length(),0);
    int i = 0;
    for(int j = 0 ; j < s.length() ; j++){
        s[i] = s[j];

        if(i > 0 && s[i] == s[i - 1]){
            count[i] = count[i - 1] + 1;

        }else{
            count[i] = 1;

        }

        if(count[i] == k){
            i  = i - k + 1;

        }else{
            i++;
        }
    }

    return s.substr(0, i);
}
int main(){
    string s = "deeedbbcccbdaa";//aa
    int k = 3;
    cout<<RemoveDupl(s , k)<<endl;
    return 0;
}