class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //do it using boyer- moore vote algo also
        int n = nums.size();
        unordered_map<int, int> mpp;

        for(int x: nums){
            mpp[x]++;
        }

        for(auto it: mpp){
            if(it.second > n/2)return it.first;
        }

        return -1;
        
    }
};