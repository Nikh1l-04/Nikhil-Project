#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSafe(vector<string>& bd, int row, int col, int n) {
    // Horizontal check
    for (int j = 0; j < n; j++) {
        if (bd[row][j] == 'Q') {
            return false;
        }
    }

    // Vertical check
    for (int i = 0; i < n; i++) {
        if (bd[i][col] == 'Q') {
            return false;
        }
    }

    // Left Diagonal check 
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (bd[i][j] == 'Q') { 
            return false;
        }
    }

    // Right Diagonal check 
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (bd[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

void nQueens(vector<string>& bd, int row, int n, vector<vector<string>>& ans) {
    if (row == n) {
        ans.push_back(bd); 
        return;
    }

    for (int i = 0; i < n; i++) {
        if (isSafe(bd, row, i, n)) { 
            bd[row][i] = 'Q';
            nQueens(bd, row + 1, n, ans);
            bd[row][i] = '.'; // Backtrack
        }
    }
}

int main() {
    int n = 4; 
    
    // Initialize board with '.'
    vector<string> bd(n, string(n, '.')); 
    vector<vector<string>> ans;

    nQueens(bd, 0, n, ans);

    cout << "Total solutions: " << ans.size() << "\n\n";
    for (int i = 0; i < ans.size(); i++) {
        cout << "Solution " << i + 1 << ":\n";
        for (int j = 0; j < n; j++) {
            cout << ans[i][j] << "\n";
        }
        cout << "\n";
    }

    return 0;
}
