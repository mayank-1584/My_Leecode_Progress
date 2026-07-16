class Solution {
public:
    #define ll long long

    bool judgeSquareSum(int c) {
        ll left = 0;
        ll right = sqrt(c);

        while (left <= right) {
            ll check = left * left + right * right;

            if (check == c) {
                return true;
            } else if (check < c) {
                left++;
            } else {
                right--;
            }
        }

        return false;
    }
};