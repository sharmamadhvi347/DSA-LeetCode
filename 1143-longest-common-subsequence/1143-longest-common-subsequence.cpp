class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        
        // We ensure n is the smaller length to minimize space
        if (m < n) return longestCommonSubsequence(text2, text1);
        
        vector<int> prev(n + 1, 0);
        vector<int> curr(n + 1, 0);
        
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    // If characters match, add 1 to the result of the previous prefixes
                    curr[j] = 1 + prev[j - 1];
                } else {
                    // If they don't match, take the best result from either excluding 
                    // the current char of text1 or text2
                    curr[j] = max(prev[j], curr[j - 1]);
                }
            }
            prev = curr;
        }
        
        return prev[n];
    }
};