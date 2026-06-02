class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low= 0;
        int high = n-1;
        int marker1 =-1;
        int marker2 = -1;
        int i = 0;
        int j = 0;

        while(n>0 && low<= high){
            int mid = (low+high)/2;

            if(nums[mid] < target) low = mid+1;
            else if( nums[mid] > target) high = mid-1;
            else if(nums[mid] == target) {
                i = mid;
                j = mid;
                break;
            }
        }

        while(n>0 && i>=0 && nums[i]==target){
            marker1 = i;
            i--;
        }
        while(n>0 && j<n && nums[j]==target){
            marker2 = j;
            j++;
        }

        return {marker1,marker2};
    }
};