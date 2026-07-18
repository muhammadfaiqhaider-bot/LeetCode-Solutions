class Solution {
public:
    int findGCD(vector<int>& nums) {

    int small = INT_MAX;  // Largest possible int
    int large = 0;
    int GCD = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > large)large = nums[i];
        if (nums[i] < small)small = nums[i];
    }

    for (int i = 1; i <= small; i++)
    {
        if (small % i == 0 && large % i == 0)GCD = i;
    }
    return GCD;
}
};