class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        // tails[i] is the smallest tail of all increasing subsequences of length i+1
        vector<int> tails;
        
        for (int x : nums) {
            // Use binary search to find the first element >= x
            auto it = lower_bound(tails.begin(), tails.end(), x);
            
            if (it == tails.end()) {
                // x is larger than any element in tails, extend the sequence
                tails.push_back(x);
            } else {
                // Replace the found element with x to maintain the smallest possible tail
                *it = x;
            }
        }
        
        return tails.size();
    }
};