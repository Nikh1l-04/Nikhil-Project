#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.length(); i++) {
            
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};

int main() {
    Solution solver;
    
    string test1 = "Hello World!";
    cout << "Original: " << test1 << "\n";
    cout << "Lowered : " << solver.toLowerCase(test1) << "\n\n";

    string test2 = "LEETCODE_100_GOALS";
    cout << "Original: " << test2 << "\n";
    cout << "Lowered : " << solver.toLowerCase(test2) << "\n\n";

    string test3 = "pascal";
    cout << "Original: " << test3 << "\n";
    cout << "Lowered : " << solver.toLowerCase(test3) << "\n";

    return 0;
}