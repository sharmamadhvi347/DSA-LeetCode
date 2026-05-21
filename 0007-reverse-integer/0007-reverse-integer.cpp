#include <climits>
class Solution {
public:
    int reverse(int x) {
        long long m = 0;

        while(x!=0  ){
            long long d = x;
            long long y = d%10;
            m = m*10 + y;
            x = x/10;
        }
        if (m > INT_MAX || m < INT_MIN)
            return 0;
        return m;
    }
}; 