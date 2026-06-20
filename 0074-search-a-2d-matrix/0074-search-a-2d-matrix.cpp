class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();        // rows
        int n = matrix[0].size();     // columns
        long long lo = 0;
        long long high = m*n-1;

        //almost everything is fine- just the syntax can be wrong of matrix and 2nd high and low altration in while loop, I am sure about rest.

        while(lo<=high){
            long long mid = (high+lo)/2;
            long long element = matrix[mid/n][mid %n];
            
            if(element > target) high = mid-1;
            if(element < target) lo = mid + 1;
            if(element == target ) return true;
        }

        return false;
    }
};