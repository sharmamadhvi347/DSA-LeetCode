class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        // Start from the top-right corner
        int row = 0;
        int col = cols - 1;

        // Continue until we go out of bounds
        while (row < rows && col >= 0) {

            // Current element
            int current = matrix[row][col];

            // Target found
            if (current == target) {
                return true;
            }

            // Current element is too large
            // Everything below in this column is even larger,
            // so eliminate this column and move left.
            else if (current > target) {
                col--;
            }

            // Current element is too small
            // Everything left in this row is even smaller,
            // so eliminate this row and move down.
            else {
                row++;
            }
        }

        // Target does not exist in the matrix
        return false;
    }
};