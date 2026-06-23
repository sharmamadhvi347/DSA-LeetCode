#include <algorithm>
#include <string>
class Solution {
public:
    bool rotateString(string s, string goal) {
        //using concatination
        // int i =0;
        // string rotated = "";
        // while(i<s.size()){
        //     rotated = s.substr(i) + s.substr(0,i);
        //     if(rotated == goal) return true;
        //     i++;
        // }
        // return false ;

        //using sliding window:
        int i =0;
        string doubble = s+s;
        if(s.size() != goal.size()) return false;
        while(i<doubble.size()){
            //s.substr(start_idx, length)
            if(doubble.substr(i,s.size())==goal) return true;
            i++;
        }
        return false;
    }
};