class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return n;

        // prevDiff helps track the direction of the last element change
        int prevDiff = nums[1] - nums[0];
        // If the first two elements are different, we have a sequence of 2, else 1
        int count = (prevDiff != 0) ? 2 : 1;

        for (int i = 2; i < n; i++) {
            int currDiff = nums[i] - nums[i - 1];
            
            // Check if we found a new peak or valley
            // (prevDiff >= 0 && currDiff < 0) or (prevDiff <= 0 && currDiff > 0)
            if ((currDiff > 0 && prevDiff <= 0) || (currDiff < 0 && prevDiff >= 0)) {
                count++;
                prevDiff = currDiff;
            }
        }

        return count;
    }
};