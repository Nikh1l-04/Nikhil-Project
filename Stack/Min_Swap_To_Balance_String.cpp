#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int BalanceStr(string s){
    int bal = 0;
    int maxBal = 0;
    for(char ch : s){
        if(ch == '['){
            bal++;
        }else{
            bal--;
        }

        if(bal < 0 ){
            maxBal = max(maxBal , abs(bal));
        }
    }

    return (maxBal + 1)/2;
}
int main(){
    string s = "][][";
    cout<<BalanceStr(s)<<endl;
}