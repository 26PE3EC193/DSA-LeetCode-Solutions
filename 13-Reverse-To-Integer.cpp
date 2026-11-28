class Solution {
public:
    int romanToInt(string s) {
        int ans = 0, maxVal = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            int val = 0;
            if (s[i] == 'I') val = 1;
            else if (s[i] == 'V') val = 5;
            else if (s[i] == 'X') val = 10;
            else if (s[i] == 'L') val = 50;
            else if (s[i] == 'C') val = 100;
            else if (s[i] == 'D') val = 500;
            else val = 1000; // M

            if (val < maxVal) ans = ans - val;
            else ans = ans + val;

            if (val > maxVal) maxVal = val;
        }
        return ans;
    }
};