#include<iostream>
using namespace std;
class rectangle{
private:
    int length;
    int breadth;
public:
    void setvalue(int l ,int b){
        length = l;
        breadth = b;
    }

    double Area(){
        return length*breadth;
    }

    void display(){
        cout<<"length = "<<length<<"  breadth = "<<breadth<<endl;
        cout<<"Area is "<<Area()<<endl;
    }
};
int main(){
    rectangle r1;
    
    r1.setvalue(5,4);
    r1.display();
}