#include <numeric>

class Solution {
public:

//ditto as book allocation problem

    bool isPossible(vector<int>& nums, int k, int barrier){
        int stu =1, pages =0;

        for(int i =0; i<nums.size(); i++){
            if(nums[i]>barrier) return false;
            if(pages + nums[i] > barrier){
                stu +=1;
                pages = nums[i];
            }else pages += nums[i];
        }

        if(stu > k) return false;
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int res = -1;
        int lo = *min_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(lo<=high){
            int mid = (lo+high)/2;

            if(isPossible(nums,k,mid) == true){
                res = mid;
                high = mid-1;
            }else lo = mid+1;
        }

        return res;
    }
};