#include <algorithm>

class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        int k = -1;
        int breaks = 0;

        // Find rotation point
        for(int i = 0; i < n - 1; i++) {

            if(nums[i] > nums[i + 1]) {
                breaks++;
                k = i + 1;
            }
        }

        // More than one break means invalid
        if(breaks > 1) return false;

        // Already sorted
        if(k == -1) return true;

        // Rotate back
        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + (n - k));

        reverse(nums.begin() + (n - k), nums.end());

        // Check sorted
        for(int i = 0; i < n - 1; i++) {

            if(nums[i] > nums[i + 1]) {
                return false;
            }
        }

        return true;
    }
};