class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        double rev = 0;
        int n = x;
        while (n != 0) {
            int digit = n % 10;
            n /= 10;
            rev = rev * 10 + digit;

            if (rev > INT_MAX) 
                return 0;
        }
        return(x==rev);
    }
};