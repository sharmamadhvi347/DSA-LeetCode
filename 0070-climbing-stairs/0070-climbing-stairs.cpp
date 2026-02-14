class Solution {
public:
    int dp[100];

    int climbStairs(int n) {
        if(n<=2) return n;

        if(dp[n] != 0) return dp[n];

        dp[n] = climbStairs(n-1) + climbStairs(n-2);
        return dp[n];
    }
};
//to reduce TC store the already created result in an array to avoid calculating same thing multiple times 