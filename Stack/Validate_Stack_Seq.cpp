#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool Validate(vector<int>& pushed, vector<int>& popped) {
    if (pushed.size() != popped.size()) {
        return false;
    }

    int stTop = -1; 
    int j = 0;     

    for (int i = 0; i < pushed.size(); i++) {
        stTop++;
        

        while (stTop >= 0 && pushed[stTop] == popped[j]) {
            stTop--; 
            j++;     
        }
    }

    return stTop == -1;
}
int main(){
    vector<int> pushed = {1,2,3,4,5};
    vector<int> popped = {4,3,5,1,2};
    bool ans = Validate(pushed, popped);
    cout<<(ans ? "True" : "False");
    cout<<endl;
    return 0;
}