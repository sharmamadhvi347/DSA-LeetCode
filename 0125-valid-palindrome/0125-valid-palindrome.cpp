class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        string ans = "";

        for( char c : s){
            if((c >= 'a' && c <= 'z') ||   //can yse isalnum(x) also instead of this ascii value thing
                (c >= 'A' && c <= 'Z') ||
                (c >= '0' && c <= '9'))
                {
                s1 += tolower(c);
            }
        }

        int i = 0;
        int j = s1.length() -1;
        while(i<=j){
            if(s1[i] == s1[j]){
                i++;
                j--;
            }
            else return false;
        }

        return true;

    }
};