#include <string>
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        string dummy = "";
        int i;
        char ch;
        sort(s1.begin(), s1.end());
        
        for(int j = 0;j<s2.size()-s1.size()+1 ; j++){
            dummy = s2.substr(j,s1.size());
            i=0;
            sort(dummy.begin(), dummy.end());
            while(i<s1.size()){
                if(s1[i] != dummy[i]) break;
                else if(s1[i] == dummy[i] && i==s1.size()-1) return true;
                i++;
            }
        }

        return false;
    }
};
