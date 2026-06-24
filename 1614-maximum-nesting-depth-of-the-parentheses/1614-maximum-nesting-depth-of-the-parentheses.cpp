class Solution {
public:
    int maxDepth(string s) {
        int level = 0;
        int i=0;
        int max=0;

        while(i<s.size()){
            if(s[i]=='('){
                level++;
                if(level>max) max = level;
            }else if(s[i]==')'){
                level--;
            }
            i++;
        }
        return max;
    }
};