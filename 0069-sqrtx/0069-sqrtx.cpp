class Solution {
public:
    int mySqrt(int x) {
        long long high = x;
        long long low= 0;
        long long mid= (low+high)/2;

        while(low<=high){

            mid= (low+high)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid > x) high =mid-1;
            else if(mid*mid < x)low = mid+1;
        }

        return high;
    }
};