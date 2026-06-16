class Solution {
public:
    string processStr(string s) {
        // use built in functions to improve the runtime drastically, literally from last to top!
        int n = s.size();
        int i = 0;
        string result = "";

        while(i<n){

            if (s[i] == '*') {
                if (!result.empty()) result.pop_back();
            }

            else if(s[i]=='#') result +=result;

            else if(s[i]=='%') reverse(result.begin(),result.end());

            else result.push_back(s[i]);
            i++;
        }

        return result;
    }
};