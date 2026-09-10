class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_water = 0;

        while (left < right) {
            int h_min = min(height[left], height[right]);
            max_water = max(max_water, (right - left) * h_min);

            while (left < right && height[left] <= h_min) {
                left++;
            }
            while (left < right && height[right] <= h_min) {
                right--;
            }
        }

        return max_water;
    }
};