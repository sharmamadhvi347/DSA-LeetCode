// #include <algorithm>

// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         ranges::sort(nums);
//         reverse(nums.begin(), nums.end());
//         int max1 = nums[0]*nums[1]*nums[2];
//         int min = max(nums[0]*nums[nums.size()-1]*nums[nums.size()-2], nums[0]*nums[nums.size()-1]*nums[1]);
        


//         return max(max1, min);
        
//     }
// };


//optimal one: keeping track of only three largest and two smallest- O(n)

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        for (int x : nums) {
            // Update three largest
            if (x > max1) {
                max3 = max2;
                max2 = max1;
                max1 = x;
            } else if (x > max2) {
                max3 = max2;
                max2 = x;
            } else if (x > max3) {
                max3 = x;
            }

            // Update two smallest
            if (x < min1) {
                min2 = min1;
                min1 = x;
            } else if (x < min2) {
                min2 = x;
            }
        }

        return max(max1 * max2 * max3,
                   max1 * min1 * min2);
    }
};