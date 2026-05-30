#include <unordered_map>

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> row;
        unordered_set<int> column;

        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int i =0;i<m;i++){
            for(int j =0;j<n; j++){
                if(matrix[i][j] == 0){
                    row.insert(i);
                    column.insert(j);
                }
            }
        }

        for(int r : row) {
            for(int j = 0; j < n; j++) {
            matrix[r][j] = 0;
            }
        }

        for(int c : column) {
            for(int i = 0; i < m; i++) {
                matrix[i][c] = 0;
            }
        }

        return;
    }
};