#include <algorithm>
#include <string>

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int j =0;
        int m =0;

        for(int i=0;i<=s.size(); i++){
            if(s[i]==' '){
                reverse(s.begin()+ j, s.begin()+i);
                j=i+1;
            }else if(i == s.size()) reverse(s.begin()+ j, s.end());
            
        }

        while(m<s.size()){
            if(m==0 && s[m]==' '){
                s.erase(m,1);
                m=0;
                continue;
            }
            else if (m ==s.size()-1 && s[m] == ' ') s.erase(m,1);
            else if(s[m]== ' ' && s[m+1]==' '){
                s.erase(m,1);
                continue;
            }
            m++;
        }

        return s;
    }
};