class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> expnums;
        int n = nums.size();
        int k= nums[0];
        expnums.push_back(nums[0]);
        int i = 1;
        int j= 1;

        while(j<n){
            if(nums[j]!=k){
                expnums.push_back(nums[j]);
                k=nums[j];

                j++;
                i++;
            }
            else j++;
        }
        for(int m=0; m<i;m++){
            nums[m]= expnums[m];
        }

        return i;
    }
};