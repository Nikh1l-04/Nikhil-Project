#include<iostream>
#include<stack>
using namespace std;
class MyQueue{
private: 
    stack<int> inp;
    stack<int> out;

    void revStack(){
        if(out.empty()){
            while(!inp.empty()){
                out.push(inp.top());
                inp.pop();
            }
        }
    }
public:
    MyQueue(){
        //Constructor
    }

    void push(int val){
        inp.push(val);
    }
    int pop(){
        revStack();
        int ele = out.top();
        out.pop();
        return ele;
    }
    int peek(){
        revStack();
        return out.top();
    }
    bool empty(){
        return inp.empty() && out.empty();
    }
};
int main(){
    MyQueue q;
    q.push(1);
    q.push(2);

    cout<<"Front Element : "<<q.peek()<<endl;
    cout<<"Popped : "<<q.pop()<<endl;
    cout<<"Empty ? "<<(q.empty()? "True":"False")<<endl;
}