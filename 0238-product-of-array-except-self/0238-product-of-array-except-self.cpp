class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> output{nums.begin(), nums.end()};
        int multiply = 1;
        int count = 0;
        int multi = 1;

        for(int i = 0;i<nums.size(); i++){
            if(nums[i] == 0){
                if(count == 1){
                    fill(output.begin(), output.end(), 0);
                    return output;
                }
                else{
                    multi = 0;
                    count++;
                    continue;
                }
            }
            else multiply = multiply * nums[i];
        }

        for(int i = 0;i<nums.size(); i++){
            if(multi == 0){
                if(nums[i]==0) output[i] = multiply;
                else{
                    output[i] = 0;
                }
            }else{
                output[i] = multiply/nums[i];
            }
        }

        return output;
    }
};