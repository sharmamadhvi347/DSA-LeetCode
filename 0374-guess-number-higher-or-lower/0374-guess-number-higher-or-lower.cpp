

class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;
        
        while (left <= right) {
            // Prevent potential overflow compared to (left + right) / 2
            int mid = left + (right - left) / 2;
            int res = guess(mid);
            
            if (res == 0) {
                return mid; // Found the number
            } else if (res == -1) {
                right = mid - 1; // Picked number is lower
            } else {
                left = mid + 1; // Picked number is higher
            }
        }
        
        return -1;
    }
};