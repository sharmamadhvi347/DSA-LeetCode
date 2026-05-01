class Solution {
public:
    vector<vector<string>> res;

    void solve(int n, int r, vector<string>& board,
               unordered_set<int>& col,
               unordered_set<int>& d1,
               unordered_set<int>& d2) {

        if (r == n) {
            res.push_back(board);
            return;
        }

        for (int c = 0; c < n; c++) {
            if (col.count(c) || d1.count(r-c) || d2.count(r+c)) continue;

            col.insert(c); d1.insert(r-c); d2.insert(r+c);
            board[r][c] = 'Q';

            solve(n, r+1, board, col, d1, d2);

            board[r][c] = '.';
            col.erase(c); d1.erase(r-c); d2.erase(r+c);
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        unordered_set<int> col, d1, d2;
        solve(n, 0, board, col, d1, d2);
        return res;
    }
};