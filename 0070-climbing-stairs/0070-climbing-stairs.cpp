class Solution {
public:
    int dp[100];

    int climbStairs(int n) {
        if(n<=2) return n;

        if(dp[n] != 0) return dp[n];

        int x = climbStairs(n-1) + climbStairs(n-2);
        return x;
    }
};