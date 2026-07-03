#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class MinStack{
private:
    stack<int> s; //Main Stack
    stack<int> st; //Min stack
public:
    MinStack(){
        //Constructor
    }

    void push(int val){
        s.push(val);
        if(st.empty()){
            st.push(val);
        }else{
            st.push(min(st.top(), val));
        }
    }

    void pop(){
        if(!s.empty()){
            s.pop();
            st.pop();
        }
    }

    int top(){
        return s.top();
    }

    int GetMin(){
        return st.top();
    }


};

int main(){
    MinStack* minStack = new MinStack();
    minStack -> push(-2);
    minStack -> push(0);
    minStack -> push(-3);

    cout<<"Current Min : "<<minStack -> GetMin()<<endl;

    minStack -> pop();
    cout<<"Top Element : "<<minStack -> top()<<endl;
    cout<<"Current Min:  "<<minStack -> GetMin()<<endl;
    delete minStack;

    return 0;
}