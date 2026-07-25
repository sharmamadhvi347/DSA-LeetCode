class Solution {
public:
    int maxProduct(int n) {
        int max1 = 0;
        int max2 = 0;
        int x = n;

        while(x!=0){
            int d = x%10;
            x = x/10;
            if(d>=max1){
                max2 = max1;
                max1 = d;
            }else if(d>max2) max2 = d;
        }

        return max1 * max2;
        
    }
};