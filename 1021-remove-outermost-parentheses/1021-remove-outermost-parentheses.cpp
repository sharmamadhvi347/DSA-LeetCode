class Solution {
public:
    string removeOuterParentheses(string s) {

        // Initialize an empty result string to store the processed output
        // Initialize a counter (level) to track the depth of parentheses
        // Traverse through the string character by character:
        // If the current character is '(', increment the level counter. If the level is greater than 1 (indicating we're inside a valid primitive), add '(' to the result string
        // If the current character is ')', decrement the level counter. If the level is greater than 0 (indicating we're still inside a valid primitive), add ')' to the result string
        // After the entire string has been traversed, return the result string

        int level=0;
        string ans ="";
        int i =0;

        while(i<s.size()){
            if(s[i]=='('){
                level++;
                if(level>1) ans.push_back(s[i]);
            }else {
                level --;
                if(level >0)ans.push_back(s[i]);
            }
            i++;
        }

        return ans;
        
    }
};