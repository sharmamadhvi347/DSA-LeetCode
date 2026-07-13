class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string s = "123456789";

        for (int len = 2; len <= 9; len++) {
            for (int i = 0; i + len <= 9; i++) {
                int num = stoi(s.substr(i, len));

                if (num >= low && num <= high)
                    ans.push_back(num);
            }
        }

        return ans;
    }
};


// class Solution {
// public:
//     vector<int> sequentialDigits(int low, int high) {
//         int range[] = {12, 23, 34, 45, 56, 67, 78, 89, 123, 234, 345, 456, 567, 678, 789, 1234, 2345, 3456, 4567, 5678, 6789, 12345, 23456, 34567, 45678, 56789, 123456, 234567, 345678, 456789, 1234567, 2345678, 3456789, 12345678, 23456789, 123456789};
//         vector <int> ans;
//         int i = 0;
//         while(i<36 && range[i]<=high){
//             if(range[i]>=low && range[i]<=high) ans.push_back(range[i]);
//             i++;
            
//         }

//         return ans;
//     }
// };