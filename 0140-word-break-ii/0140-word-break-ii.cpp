class Solution {
public:
    unordered_map<string, vector<string>> memo;

    vector<string> dfs(string s, unordered_set<string>& dict) {
        if (memo.count(s)) return memo[s];
        vector<string> res;

        if (s.empty()) {
            res.push_back("");
            return res;
        }

        for (string word:dict) {
            if (s.substr(0, word.size()) == word) {
                vector<string> sub = dfs(s.substr(word.size()), dict);
                for (string t:sub) {
                    res.push_back(word + (t.empty() ? "" : " " + t));
                }
            }
        }
        return memo[s] = res;
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        return dfs(s, dict);
    }
};