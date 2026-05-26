#include<algorithm>

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n) k = k%n;

        //can be solved without this reverse function 
        //using temp variable and doing normal swaping
        //it's just that solution would be lengthier with that
        //and both of them are done in O(1) Space Complexity

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin()+k, nums.end());

        //another solution would be using 1 more array and just simply copying elements from 
        //nums according to k 
        
        return;
    }
};