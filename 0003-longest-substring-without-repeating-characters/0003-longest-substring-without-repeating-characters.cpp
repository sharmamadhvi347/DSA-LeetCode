#include <unordered_map>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int mxL = 0;
        int left = 0;
        
        for(int i = 0; i < s.size(); i++) {

            if(mpp.find(s[i]) != mpp.end()) left = max(left, mpp[s[i]] + 1);

            mpp[s[i]] = i;
            mxL = max(mxL, i - left + 1);
        }

        return mxL;
    }
}; 