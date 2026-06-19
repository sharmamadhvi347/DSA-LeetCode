#include <cmath>
#include <numeric>
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long n = nums.size();
        long long mx = *max_element(nums.begin(), nums.end());
        long long lo = 1;
        long long high = mx;
        long long ans = 1000000;
        long long sm = accumulate(nums.begin(), nums.end(), 0LL);

        if(sm == threshold) return 1;

        while(lo<=high){
            long long mid = (high+lo)/2;
            sm=0;

            for(int i = 0;i<n;i++){
                sm += ceil((double)nums[i]/mid);
            }
            //some issue in this if block
            if(sm<=threshold){
                high = mid-1;
                if(mid<ans) ans = mid;
            }else lo = mid+1;

        }

        return ans;

    }
};