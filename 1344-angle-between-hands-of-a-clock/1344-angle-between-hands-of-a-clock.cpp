class Solution {
public:
    double angleClock(int hour, double minutes) {
        int first = hour * 30;
        double secound = (minutes * 11)/2;
        double ans = abs(first-secound);
        return min(ans , 360.00 - ans);
    }
};