class Solution {
public:
    void moveZeroes(vector<int>& nums) {

    vector<int> arr;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)arr.push_back(nums[i]);
    }
    int dif = nums.size() - arr.size();
    for (int i = 0; i < dif; i++)
    {
        arr.push_back(0);
    }
    nums = arr;

}
};