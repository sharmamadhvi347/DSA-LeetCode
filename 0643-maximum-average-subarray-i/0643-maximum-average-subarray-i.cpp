// #include <climits>

// find_max_cross(vector<int>& nums, int low, int mid, int high){
//     int ls = INT_MIN;
//     double sum = 0;

//     for(int i = n/2; i>=0 ; i--){
//         sum = sum + nums[i];
//         if (sum > ls){
//             ls = sum;
//         }
//     }

//     int rs = INT_MIN;
//     for(int j = (n/2)+1; j<n ; j++){
//         sum = sum + nums[j];
//         if(sum > rs ){
//             rs = sum;
//         }
//     }
//     return
// }

// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         int n = nums.size();
        
//         return double(sum/k);
//     }
// };


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long windowSum = 0;

        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        long long maxSum = windowSum;

        for (int i = k; i < nums.size(); i++) {
            windowSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return (double)maxSum / k;
    }
};