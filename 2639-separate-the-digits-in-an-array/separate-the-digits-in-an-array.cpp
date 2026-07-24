class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
    vector<int>result;
    vector<int>temp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 10)
        {
            result.push_back(nums[i]);
        }
        else
        {
            while (nums[i] > 0)
            {
       
                int tempo = nums[i] % 10;
                temp.push_back(tempo);
                nums[i] /= 10;
            }
            for (int i = temp.size() - 1;i >= 0; i--)
            {
                result.push_back(temp[i]);
            }
            temp.clear();
        }
    }
    return result;
}
};