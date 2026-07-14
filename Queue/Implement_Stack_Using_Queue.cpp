#include<iostream>
#include<queue>
using namespace std;
class MyStack{
    queue<int> q;

public: 
    void push(int val){
        q.push(val);
        for(int i = 0 ; i < q.size() - 1 ; i++){
            q.push(q.front());
            q.pop();
        } 
    }
    int pop(){
        int ele = q.front();
        q.pop();
        return ele;
    }
    int top(){
        return q.front();
    }
    bool empty(){
        return q.size() == 0;
    }
};
int main(){

    return 0;
}
