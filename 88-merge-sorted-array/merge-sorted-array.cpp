class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    if (m == 0 && n == 0)
        return;

    if (m == 0)
    {
        for (int i = 0; i < n; i++)
        {
            nums1[i] = nums2[i];
        }
        return;
    }

    if (n == 0)
    {
        return;
    }

    vector<int> temp;

    for (int i = 0; i < m; i++)
    {
        temp.push_back(nums1[i]);
    }

    int i = 0, j = 0;
    int z = 0;

    while (i < m && j < n)
    {
        if (temp[i] < nums2[j])   // ⭐ j, not i
        {
            nums1[z] = temp[i];
            i++;
        }
        else
        {
            nums1[z] = nums2[j];
            j++;
        }

        z++;
    }

    // Remaining elements of temp
    while (i < m)
    {
        nums1[z] = temp[i];
        i++;
        z++;
    }

    // Remaining elements of nums2
    while (j < n)
    {
        nums1[z] = nums2[j];
        j++;
        z++;
    }
}
};