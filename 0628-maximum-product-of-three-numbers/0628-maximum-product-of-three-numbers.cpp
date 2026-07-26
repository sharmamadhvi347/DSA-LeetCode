#include <algorithm>

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        ranges::sort(nums);
        reverse(nums.begin(), nums.end());
        int max1 = nums[0]*nums[1]*nums[2];
        int min = max(nums[0]*nums[nums.size()-1]*nums[nums.size()-2], nums[0]*nums[nums.size()-1]*nums[1]);
        


        return max(max1, min);
        
    }
};