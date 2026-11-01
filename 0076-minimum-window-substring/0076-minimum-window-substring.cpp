
class Solution {
public:
    string minWindow(string s, string t) {

        string ans = "";
        int minLen = INT_MAX;

        if(t.size() > s.size()) return ans;

        // Frequency array instead of hashmap
        vector<int> mp(256, 0);

        for(char c : t) mp[(unsigned char)c]++;

        int left = 0, count = t.size();
        int start = 0;

        for(int right = 0; right < s.size(); right++) {

            if(mp[(unsigned char)s[right]] > 0)
                count--;

            mp[(unsigned char)s[right]]--;

            while(count == 0) {

                // Update minimum window
                if(right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                mp[(unsigned char)s[left]]++;

                if(mp[(unsigned char)s[left]] > 0)
                    count++;

                left++;
            }
        }

        if(minLen != INT_MAX)
            ans = s.substr(start, minLen);

        return ans;
    }
};
