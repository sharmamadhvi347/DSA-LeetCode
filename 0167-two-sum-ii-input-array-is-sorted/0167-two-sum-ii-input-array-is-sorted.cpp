class Solution {
public:
    vector<int> twoSum(vector<int>& numbs, int target) {
        int i = 0;
        int j = numbs.size()-1;

        while(i<j){
            if(numbs[i]+numbs[j]>target)j--;
            if(numbs[i]+numbs[j]<target)i++;
            if(numbs[i]+numbs[j]==target) return {i+1,j+1};

        }

        return {};
    }
};