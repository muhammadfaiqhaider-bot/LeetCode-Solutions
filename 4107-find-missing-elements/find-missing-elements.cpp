class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

    vector<int>ans;

    sort(nums.begin(), nums.end());


    int diff = 0;

    for (int i = 1; i < nums.size(); i++)
    {

        diff = nums[i] - nums[i - 1];

        if (diff > 1)
        {
            for (int j = 0;j < diff - 1; j++)
            {
                ans.push_back(nums[i - 1] + 1 + j);
            }
        }

    }

    return ans;
}
};