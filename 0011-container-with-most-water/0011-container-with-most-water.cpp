class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int width =0;
        int height = 0;
        int i =0; 
        int j = n-1;
        int mx=0;

        while (i < j) {
            int width = j - i;
            int height = min(heights[i], heights[j]);

            mx = max(mx, width * height);

            if (heights[i] < heights[j])
                i++;
            else
                j--;
        }

        return mx;
    }
};
