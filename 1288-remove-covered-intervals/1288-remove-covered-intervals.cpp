class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int min = 1000;
        int max = -1000;
        int n = intervals.size();
        int count = 0;
        int i = 0;

        sort(intervals.begin(), intervals.end(),
        [](vector<int>& a, vector<int>& b) {
            if (a[0] == b[0])
                return a[1] > b[1];   // decreasing
            return a[0] < b[0];       // increasing
        });
        while(i<n){
            if (intervals[i][1] > max){
                 max = intervals[i][1];
                 count++;
            }
            i++;
        }

        return count;
    }
};