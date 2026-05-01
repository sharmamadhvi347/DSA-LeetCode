class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> need(128, 0);
        for (char c : t) need[c]++;

        int l = 0, count = t.size(), start = 0, len = INT_MAX;

        for (int r = 0; r < s.size(); r++) {
            if (need[s[r]]-- > 0) count--;

            while (count == 0) {
                if (r - l + 1 < len) {
                    len = r - l + 1;
                    start = l;
                }
                if (++need[s[l++]] > 0) count++;
            }
        }
        return len == INT_MAX ? "" : s.substr(start, len);
    }
};