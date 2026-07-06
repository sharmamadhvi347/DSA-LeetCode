#include <string>
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        if(tokens.size() == 1)return stoi(tokens[0]);
        st.push(stoi(tokens[0]));
        int ans;

        for(int i =1; i< tokens.size(); i++){
            if (tokens[i] == "+" || tokens[i] == "-" ||
                tokens[i] == "*" || tokens[i] == "/"){
                int t1 = st.top();
                st.pop();
                int t2 = st.top();
                st.pop();
                if(tokens[i] == "+") ans = t1+t2;
                else if (tokens[i] == "-") ans = t2-t1;
                else if(tokens[i] ==  "*") ans = t1 * t2;
                else ans = t2/t1;
                st.push(ans);
            }
            else st.push(stoi(tokens[i]));
        }

        return st.top();
    }
};
