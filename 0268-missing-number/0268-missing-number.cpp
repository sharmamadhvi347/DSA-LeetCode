class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        while(i < n){
            int ele = nums[i];

            if(ele < n && nums[i] != nums[ele])
                swap(nums[i], nums[ele]);
            else
                i++;
        }

        for(int j = 0; j < n; j++){
            if(nums[j] != j) return j;
        }

        return n;
    }
};