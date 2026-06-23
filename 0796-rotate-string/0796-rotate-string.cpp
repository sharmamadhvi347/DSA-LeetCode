#include <algorithm>
#include <string>
class Solution {
public:
    bool rotateString(string s, string goal) {
        //using concatination
        int i =0;
        string rotated = "";
        while(i<s.size()){
            rotated = s.substr(i) + s.substr(0,i);
            if(rotated == goal) return true;
            i++;
        }
        return false ;
    }
};