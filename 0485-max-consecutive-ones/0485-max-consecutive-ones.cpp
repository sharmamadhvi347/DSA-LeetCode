class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max = 0;
        int k = 0;
        int j =0;

        while(j<n){
            if(nums[j]==1){
                k++;
                if(k>max) max = k;
            }
            else if(nums[j]==0){
                k =0;
            }
            j++;
        }
        return max;
    }
};