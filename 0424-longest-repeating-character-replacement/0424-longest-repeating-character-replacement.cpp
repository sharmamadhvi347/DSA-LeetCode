class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int ans=0;
        int count=0;
        int wind = 0;
        int l =0;

        for(int i =0;i<s.size();i++){
            mp[s[i]]++;
            wind++;
            vector<pair<char,int>> v(mp.begin(), mp.end());
            sort(v.begin(), v.end(), [](auto &a, auto &b) {
                return a.second > b.second;
            });
            count=wind-v[0].second;
            if(count>k){
                wind--;
                mp[s[l]]--;
                l+=1;
            }
            else ans = wind;
        }
        return ans;
    }
};
