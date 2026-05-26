#include<unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //TC=O(1)-> using hash maps
        //TC = O(n^2) -> using 2 for loops for searching🤮
        unordered_map<int,int> mp;

        for(int i=0; i<nums.size(); i++) {

            int need = target - nums[i];

            if(mp.find(need) != mp.end()) {
                return {i,mp[need]};
            }

            mp[nums[i]] = i;
        }

        return {-1};
    }
};