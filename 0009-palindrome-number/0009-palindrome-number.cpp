class Solution {
public:
    bool isPalindrome(int x) {
        long long m = 0;
        int z = x;

        while(x>0  ){
            long long d = x;
            long long y = d%10;
            m = m*10 + y;
            x = x/10;
        }
        if (z == m && z>=0) return true;
        else return false;
    }
};