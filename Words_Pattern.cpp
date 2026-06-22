// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <unordered_set>
// #include <string>

// using namespace std;

// bool Words(string& pat, string& s){
//     string word = "";
//     vector<string> vec;
    
//     for(int i = 0; i < s.length(); i++){
//         if(s[i] == ' '){
//             if(!word.empty()) {
//                 vec.push_back(word);
//                 word = "";
//             }
//         } else {
//             word += s[i];
//         }
//     }
//     if(!word.empty()) vec.push_back(word);

//     if(vec.size() != pat.length()){
//         return false;
//     }

//     unordered_map<char, string> charToWord;
//     unordered_set<string> usedWords; 
//     for(int i = 0; i < vec.size(); i++){
//         char c = pat[i];
//         string w = vec[i];

//         if(charToWord.count(c) == 0){
//             if(usedWords.count(w) > 0) {
//                 return false;
//             }
//             charToWord[c] = w;
//             usedWords.insert(w);
//         } else {
//             if(charToWord[c] != w){
//                 return false;
//             }
//         }
//     }    
//     return true;
// }

// int main(){
//     string pat, s;
//     cout << "Enter the Pattern : ";
//     cin >> pat;
    
//     cin.ignore(); 
    
//     cout << "Enter the String : ";
//     getline(cin, s); 

//     bool ans = Words(pat, s);
//     cout << "~~~~~ " << (ans ? "True" : "False") << " ~~~~~" << endl;

//     return 0;
// }
