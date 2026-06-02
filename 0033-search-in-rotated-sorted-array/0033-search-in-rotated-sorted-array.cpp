class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i =1;
        //int pvt;
        int low;
        int high;

        while(i<n){
            if(nums[i-1]>nums[i]){
                //pvt = i;
                break;
            }i++;
        }

        if(target>=nums[0]){
            low = 0;
            high = i-1;
            while(low<=high){
                int mid = (low+high)/2;

                if(nums[mid] == target) return mid;
                else if(nums[mid]> target) high = mid-1;
                else low = mid+1;
            }
        }

        else{
            low = i;
            high = n-1;
            while(low<=high){
                int mid = (low+high)/2;

                if(nums[mid] == target) return mid;
                else if(nums[mid]> target) high = mid-1;
                else low = mid+1;
            }
        }
            
        return -1;
    }
};