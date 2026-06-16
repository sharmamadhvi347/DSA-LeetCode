class Solution {
public:
    string processStr(string s) {
        int n = s.size();
        int i = 0;
        string result = "";

        while(i<n){

            if (s[i] == '*') {
                if (!result.empty()) {
                    result.pop_back();
                }
            }

            else if(s[i]=='#'){
                string dup = result;
                int r = result.size();
                for(int i=0; i<r; i++){
                    result.push_back(dup[i]);
                }
            }

            else if(s[i]=='%'){
                int r = result.size() -1;
                int l = 0;
                
                while(l<=r){
                    char temp = ' ';
                    temp = result[r];
                    result[r] = result[l];
                    result[l] = temp;
                    r--;
                    l++;
                }
            }

            else result.push_back(s[i]);
            i++;
        }

        return result;
    }
};