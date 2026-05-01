class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st;
        h.push_back(0);
        int ans = 0;

        for (int i = 0; i < h.size(); i++) {
            while (!st.empty() && h[st.top()] > h[i]) {
                int height = h[st.top()]; st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                ans = max(ans, height * width);
            }
            st.push(i);
        }
        h.pop_back();
        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;
        int n = matrix[0].size();
        vector<int> h(n, 0);
        int ans = 0;

        for (auto& row : matrix) {
            for (int i = 0; i < n; i++)
                h[i] = (row[i] == '1') ? h[i] + 1 : 0;
            ans = max(ans, largestRectangleArea(h));
        }
        return ans;
    }
};