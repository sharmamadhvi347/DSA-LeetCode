class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // Start backtracking if the first character matches
                if (board[i][j] == word[0] && backtrack(board, word, 0, i, j)) {
                    return true;
                }
            }
        }
        return false;
    }

private:
    bool backtrack(vector<vector<char>>& board, const string& word, int index, int r, int c) {
        // Base case: all characters found
        if (index == word.length()) {
            return true;
        }
        
        // Boundary and mismatch checks
        if (r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || board[r][c] != word[index]) {
            return false;
        }
        
        // Mark the cell as visited using a placeholder
        char temp = board[r][c];
        board[r][c] = '#';
        
        // Explore 4 directions: up, down, left, right
        bool found = backtrack(board, word, index + 1, r + 1, c) ||
                     backtrack(board, word, index + 1, r - 1, c) ||
                     backtrack(board, word, index + 1, r, c + 1) ||
                     backtrack(board, word, index + 1, r, c - 1);
        
        // Restore the cell (backtrack)
        board[r][c] = temp;
        
        return found;
    }
};