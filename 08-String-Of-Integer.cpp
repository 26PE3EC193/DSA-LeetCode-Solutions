class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        int sign = 1;
        long result = 0;

        // 1. Whitespace skip chey
        while (i < n && s[i] == ' ') {
            i++;
        }

        // 2. Sign check chey
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // 3. Digits ni number ga marchu
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            result = result * 10 + digit;

            // 4. Overflow check
            if (sign == 1 && result > INT_MAX) {
                return INT_MAX;
            }
            if (sign == -1 && result > (long)INT_MAX + 1) {
                return INT_MIN;
            }
            i++;
        }

        return (int)(result * sign);
    }
};
