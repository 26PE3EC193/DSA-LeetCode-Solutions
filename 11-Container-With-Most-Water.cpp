class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {
            // Width = rendu lines madhya distance
            int width = right - left;
            // Height = rendu lines lo chinna dani varake water untundi
            int h = min(height[left], height[right]);
            int area = width * h;

            maxWater = max(maxWater, area);

            // Chinna line ne kaduputham, endukante pedda line unte
            // inka ekkuva water vache chance untundi
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxWater;
    }
};
