class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();

        long long mx = *max_element(nums.begin(), nums.end());
        long long mn = *min_element(nums.begin(), nums.end());

        long long count = mx-mn;
        return count*k;
    }
};