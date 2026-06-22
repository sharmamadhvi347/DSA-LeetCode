class Solution {
public:
    int maxDistance(string moves) {
        int dx = 0, dy = 0, k = 0;

        for (char c : moves) {
            if (c == 'R')
                dx++;
            else if (c == 'L')
                dx--;
            else if (c == 'U')
                dy++;
            else if (c == 'D')
                dy--;
            else
                k++;
        }

        return abs(dx) + abs(dy) + k;
    }
};