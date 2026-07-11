class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        int slow = 0;
        int fast = size - 1;

        while (slow < fast)
        {
            if (numbers[slow] + numbers[fast] == target)
            {
                return { slow + 1, fast + 1 };
            }

            if (numbers[slow] + numbers[fast] > target)
            {
                fast--;
            }
            else
            {
                slow++;
            }
        }
        return {}; 
    }
};