class Solution {
public:
    string reversePrefix(string word, char ch)
{
    int start = 0;
    int end = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == ch)
        {
            end = i;
            while (start < end)
            {
                char temp = word[start];
                word[start] = word[end];
                word[end] = temp;
                start++;
                end--;
            }
            return word;
        }
    }
    return word;
}
};