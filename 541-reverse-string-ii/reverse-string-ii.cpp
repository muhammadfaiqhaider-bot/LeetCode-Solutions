class Solution {
public:
string reverseStr(string s, int k)
{
    for (int start = 0; start < s.length(); start += 2 * k)
    {
        int left = start;
        int right = left + k - 1;

        if (right >= s.length())
            right = s.length() - 1;

        while (left < right)
        {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }

    return s;
}
};