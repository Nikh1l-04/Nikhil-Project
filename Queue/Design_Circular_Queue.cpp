#include<iostream>
#include<vector>
using namespace std;
class Cir_Queue{
private:
    int cap;
    int head;
    int tail;
    int currSize;
    vector<int> vec;
public:
    Cir_Queue(int k){
        cap = k;
        vec.resize(k);
        head = tail = 0;
        currSize = 0;
    }

    bool enqueue(int val ){
        if(currSize == cap){
            return false;
        }
        vec[tail] = val;
        tail = (tail + 1) % cap;
        currSize++;
        return true;
    }
    bool dequeue(){
        if(currSize == 0){
            return false;
        }
        head = (head + 1) % cap;
        currSize--;
        return true;
    }

    int Front(){
        if(currSize == 0){
            return -1;
            
        }
        return vec[head];
    }
    int rear(){
        if(currSize == 0){
            return -1;
        }
        return vec[(tail - 1 + cap) % cap];
    }
    
};
int main(){
    Cir_Queue q(3);
    cout << boolalpha;
    cout << q.enqueue(1) << endl; // true
    cout << q.enqueue(2) << endl; // true
    cout << q.enqueue(3) << endl; // true
    cout << q.enqueue(4) << endl; // false (Full)
    cout << q.rear() << endl;     // 3
    cout << q.dequeue() << endl;  // true (Removes 1)
    cout << q.enqueue(4) << endl; // true (Inserts 4 at wrapped index 0)
    cout << q.Front() << endl;    // 2
    return 0;
}