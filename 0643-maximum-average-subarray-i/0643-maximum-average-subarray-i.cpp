#include <climits>

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;
        

        for(int m = 0; m<k; m++){
            sum = sum + nums[m];
        }

        int i = 0;
        int j = k-1;
        long long maxS = sum;

        // if(n==1) return nums[0];
        // else if(n ==k) return double(sum)/k;

        while(j<n-1 && n!=1 && n!=k){
            sum = sum - nums[i] + nums[j+1];
            if(sum>maxS)
                maxS =sum;
            j++;
            i++;    
        }

        return double(maxS)/k;

    }
};