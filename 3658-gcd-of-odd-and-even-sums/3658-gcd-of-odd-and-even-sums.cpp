class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int b = n*n;
        int a = n*(n+1);

        while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
        }

        return a;
        
    }
};