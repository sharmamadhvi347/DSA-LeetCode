class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        //DID THIS QUESTION IN 1 GO AND 5 MINS😁,YAYYYY
        int n = nums.size();
        int i = 0;
        int j =1;

        while(j<n){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                j++;
                i++;
            }
            else if(nums[i]==0 && nums[j]== 0) j++;
            else{
                i++;
                j++;
            }
        }
        return;
    }
};