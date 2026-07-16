#include<iostream>
#include<vector>
using namespace std;
class MyCircularDeque{
private:
    int head;
    int tail;
    int currSize;
    int cap;
    vector<int> vec;
public:
    MyCircularDeque(int k){
        cap = k;
        head = tail = currSize = 0;
        vec.resize(k);
    }
    bool insertLast(int val ){
        if(currSize == cap){
            return false;
        }
        vec[tail] = val;
        tail = (tail + 1) % cap;
        currSize++;
        return true;
    }
    bool insertFront(int val ){
        if(currSize == cap){
            return false;
        }
        head = (head - 1 + cap) % cap;
        vec[head] = val;
        currSize++;
        return true;
    }
    bool deleteFront(){
        if(currSize == 0){
            return false;
        }
        head = (head + 1) % cap;
        currSize--;
        return true;
    }
    bool deleteLast(){
        if(currSize == 0){
            return false;
        }
        tail = (tail - 1 + cap) % cap;
        currSize--;
        return true;
    }

    int getFront(){
        if(currSize == 0){
            return -1;
            
        }
        return vec[head];
    }
    int getRear(){
        if(currSize == 0){
            return -1;
        }
        return vec[(tail - 1 + cap) % cap];
    }
    bool isEmpty(){
        return currSize == 0;
    }
    bool isFull(){
        return currSize == cap;
    }
};
int main(){
    MyCircularDeque deque(3); // Capacity of 3

    std::cout << std::boolalpha; // Print true/false instead of 1/0
    
    std::cout << "Insert Last 1: " << deque.insertLast(1) << std::endl;  // true
    std::cout << "Insert Last 2: " << deque.insertLast(2) << std::endl;  // true
    std::cout << "Insert Front 3: " << deque.insertFront(3) << std::endl; // true -> Deque is now [3, 1, 2]
    std::cout << "Insert Last 4: " << deque.insertLast(4) << std::endl;  // false (Full)
    
    std::cout << "Rear element: " << deque.getRear() << std::endl;       // 2
    std::cout << "Is Full: " << deque.isFull() << std::endl;             // true
    
    std::cout << "Delete Front: " << deque.deleteFront() << std::endl;   // true -> Deque is now [1, 2]
    std::cout << "Insert Front 4: " << deque.insertFront(4) << std::endl; // true -> Deque is now [4, 1, 2]
    std::cout << "Front element: " << deque.getFront() << std::endl;     // 4
    return 0;
}