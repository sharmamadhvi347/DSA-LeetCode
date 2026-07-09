class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //solve using dp and stack both
       stack<pair<int, int>> st;
        int n = temperatures.size();
        vector<int> arr(n, 0);
        int i = 0;

        while(i < n){
            if(st.empty()){
                st.push({temperatures[i], i});
                i++;
                continue;
            }
            if(temperatures[i] <= st.top().first){
                st.push({temperatures[i], i});
                i++;
            } else {
                int index = st.top().second;
                arr[index] = i - index;
                st.pop();
                // Don't increment i yet, check current i against new top
            }
        }
        return arr;
    }
};