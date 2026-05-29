class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        bool flag = 1;
        vector<int> nums2;
        int i=0;
        int j=0;

        while(j<n || i<n){
            if(i<n && nums[i]>=0 && flag == 1 ){
                nums2.push_back(nums[i]);
                i++;
                flag = 0;
            }else if(i<n && nums[i]<0 ) i++;

            if(j<n && nums[j]<0 && flag ==0 ){
                nums2.push_back(nums[j]);
                j++;
                flag = 1;
            }else if(j<n && nums[j]>0 ) j++;
        }

        return nums2;
    }
};