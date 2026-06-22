// #include<iostream>
// using namespace std;
// class bankacc {
// public:
//     int AccNo;
//     int balance;
//     string Holdername;
//     bankacc(int a, int b, string h){
//         AccNo = a;
//         balance = b;
//         Holdername = h;
//     }

//     void deposit(int n){
//         balance += n;
//         cout<<"Updated Balance : "<<balance<<endl;
//     }

//     void withdraw(int n){
//         balance -= n;
//         cout<<"Updated Balance : "<<balance<<endl;
//     }

//     void showBalance(){
//         cout<<"Current balance : "<<balance<<endl;
//     }
// };
// int main(){
//     bankacc a1(9871 , 1000 , "Nikhil");
//     bankacc a2(8178 , 1500 , "Naman");
//     a1.showBalance();
//     a2.showBalance();

//     a1.deposit(500);
//     a2.deposit(500);

//     a1.withdraw(100);
//     a2.withdraw(100);    
// }