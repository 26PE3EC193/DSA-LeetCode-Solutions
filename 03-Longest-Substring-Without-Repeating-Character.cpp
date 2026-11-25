class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lastSeen[256];
        for(int i = 0; i < 256; i++) lastSeen[i] = -1;

        int left = 0;
        int maxLen = 0;

        for(int right = 0; right < s.length(); right++) {
            char c = s[right];

            if(lastSeen[c] >= left) {
                left = lastSeen[c] + 1;
            }

            lastSeen[c] = right;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
