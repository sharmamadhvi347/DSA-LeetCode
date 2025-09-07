class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if (s.size() != t.size()) return false;

        // store last index seen of characters
        int lastS[256];  
        int lastT[256];

        // initialize all to -1
        for (int i = 0; i < 256; i++) {
            lastS[i] = -1;
            lastT[i] = -1;
        }

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            // If previously seen, indices must match
            if (lastS[c1] != lastT[c2]) return false;

            // mark the last seen index
            lastS[c1] = i;
            lastT[c2] = i;
        }
        return true;
    }
};