class Solution {
public:
    int maxArea(vector<int>& height) {
    int size = height.size();
    int length = 0;
    int width = 0;
    int res = 0;
    int high = 0;
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        // Calculation Phase
        if (height[left] < height[right]) {
            length = height[left];
        }
        else {
            length = height[right];
        }
        width = right - left;
        res = width * length;

        if (high < res)high = res;
        
        //POinter Movement Phase
        if (height[left] < height[right]) {
            left++;
        }
        else {
            right--;
        }
    }
    return high;
}
};