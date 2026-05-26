#include<algorithm>

class Solution {
public:

//solve it using hashing also now
    int singleNumber(vector<int>& nums) {
        //epic sol using XOR
        int ans = 0;

        for(int x : nums){
            ans ^=x;
        }

        return ans;


        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // int max=nums[n-1];//max should be set after sorting not before!!, you did this mistake here so be careful for further ques

        // for(int i = 0; i<n-1; i=i+2){
        //     if(nums[i]==nums[i+1]) continue;
        //     else{
        //         max = nums[i];
        //         break;
        //     }
        // }

        // return max;
    }
};