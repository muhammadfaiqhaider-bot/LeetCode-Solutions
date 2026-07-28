class Solution {
public:
    int maxProduct(int n) {

    vector<int>dig;
    int count = 0;
    int max = 0;
    while (n > 0)
    {
        int temp = n % 10;
        dig.push_back(temp);
        n /= 10;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (max < dig[i] * dig[j])max = dig[i] * dig[j];
        }
    }
    return max;
}
};