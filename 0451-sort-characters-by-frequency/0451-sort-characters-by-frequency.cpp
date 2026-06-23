#include <string>
#include <queue>
class Solution {
public:
    string frequencySort(string s) {
        sort(s.begin(), s.end());
        string ans = "";
        unordered_map<char, int> mpp;

        for(char x: s){
            mpp[x]++;
        }

        priority_queue<pair<int,char>> pq;

        for(auto &p : mpp){
            pq.push({p.second, p.first});
        }

        while(!pq.empty()){
            ans = ans.append(pq.top().first,pq.top().second);
            pq.pop();
        }

        return ans;
    }
};