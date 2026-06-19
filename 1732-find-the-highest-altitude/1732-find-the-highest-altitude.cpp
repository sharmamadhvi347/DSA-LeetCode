class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt;
        alt.push_back(0);
        int max = alt[0];

        for(int i=1;i<=gain.size();i++){
            alt.push_back(alt[i-1] + gain[i-1]);
            if(alt[i]>max) max = alt[i];
        }

        return max;
    }
};