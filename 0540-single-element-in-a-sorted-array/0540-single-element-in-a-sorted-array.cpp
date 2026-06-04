class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low =0;
        int high = n-1;

        while(low<=high){
            int mid = (low+high)/2;
            if(low == high) return nums[mid];

            if(mid%2 == 0){
                if(mid<n-1 && nums[mid]==nums[mid+1]){
                    low = mid+2;
                }else high = mid;

            }else{
                if(mid>0 && nums[mid]==nums[mid-1]){
                    low = mid+1;
                }else high = mid-1;
            }
        }

        return -1;
    }
};