class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> right;
        vector<int> middle;
        int i = 0, j = 0, k = 0,l=0, a = 0, b = 0,c=0;

        while(i<nums.size()){
            if(nums[i]< pivot){
                left.push_back(nums[i]);
                //j++;
            }else if(nums[i]>pivot){
                right.push_back(nums[i]);
                //k++;
            }else{
                middle.push_back(nums[i]);
                //l++;
            }
            i++;
        }

        for(int m= 0;m<nums.size();m++){
            if(a<left.size()){
                nums[m]=left[a];
                a++;
            }
            else if(b<middle.size()){
                nums[m] = middle[b];
                b++;
            }else if(c<right.size()){
                nums[m]= right[c];
                c++;
            }
            
        }
        return nums;
    }
};