#include <cmath>
class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour %= 12;
        double angle = abs(30*hour - 5.5*minutes);
        return min(angle, 360-angle);
    }
};