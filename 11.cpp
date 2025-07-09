class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxArea = 0;
        int begin = 0;
        int end = height.size() - 1;

        while (begin < end) {
            int blueSection = end - begin;
            int minHeight = min(height[begin], height[end]);
            int blueSectionArea = blueSection * minHeight;

            maxArea = max(maxArea, blueSectionArea);

            if (height[begin] < height[end]) {
                begin++;
            } else {
                end--;
            }
        }

        return maxArea;
    }
};