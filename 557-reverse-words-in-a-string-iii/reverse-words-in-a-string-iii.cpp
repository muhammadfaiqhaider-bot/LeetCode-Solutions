class Solution {
public:
    string reverseWords(string s)
{
    int start = 0;
    int end = 0;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            end = i - 1;

            while (start < end)
            {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
            end++;
            start = i+1;
        }
    }
    return s;
}
};