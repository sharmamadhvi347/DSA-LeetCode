class Solution {
public:
    int fib(int n) {
        if (n==0) return 0;
        else{
            int d[n+1] ;
            d[0] = 0;
            d[1] = 1;

            for(int i = 2; i<=n; i++){
                d[i] = d[i-1] + d[i-2];
            }

            return d[n];
        }
        
    }
};