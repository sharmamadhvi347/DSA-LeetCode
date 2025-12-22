class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        vector<int> arr(2, -1);
        int mid;

        while(low<=high){
            mid = (low+high)/2;

            if(nums[mid]==target){
                if(mid > 0 && nums[mid-1]==target) high= mid-1;
                else{
                arr[0]=mid;
                break;}
            }

            else if(nums[mid]<target) low = mid+1;
            else if(nums[mid]>target) high = mid-1;
        }

        low = 0;
        high = nums.size() - 1;


        while(low<=high){
            int mid1 = (low+high)/2;

            if(nums[mid1]==target){
                if((mid1 != nums.size() - 1) && nums[mid1+1]==target) low= mid1+1;
                else{ 
                arr[1]=mid1;
                break;}
            }

            else if(nums[mid1]<target) low = mid1+1;
            else if(nums[mid1]>target) high = mid1-1;
        }

        return arr;
    }
};