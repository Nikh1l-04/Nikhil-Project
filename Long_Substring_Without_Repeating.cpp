// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int SubString(string str){
//     unordered_set<char> s;
//     int l = 0;
//     int r = 0;
//     int MaxLen = 0;
//     while( r < str.length()){
//         if( s.find(str[r]) == s.end()){
//             s.insert(str[r]);
//             MaxLen = max(MaxLen, r - l + 1);
//             r++;
//         }else{
//             s.erase(str[l]);
//             l++;
//         }
//     }

//     return MaxLen;
// }
// int main(){
//     string str;
//     cout<<"Enter the String : ";
//     cin>>str;
//     int ans = SubString(str);
//     cout<<"~~~~ "<<ans<<" ~~~~";

//     return 0;
// }