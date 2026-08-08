class Solution {
public:
int maximumProduct(vector<int>& nums)
{
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < nums.size(); i++)
    {
        // Find 3 largest
        if (nums[i] > first)
        {
            third = second;
            second = first;
            first = nums[i];
        }
        else if (nums[i] > second)
        {
            third = second;
            second = nums[i];
        }
        else if (nums[i] > third)
        {
            third = nums[i];
        }

        // Find 2 smallest
        if (nums[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = nums[i];
        }
        else if (nums[i] < secondSmallest)
        {
            secondSmallest = nums[i];
        }
    }

    int product1 = first * second * third;
    int product2 = smallest * secondSmallest * first;

    return max(product1, product2);
}
};