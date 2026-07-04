class Solution {
public:
bool buddyStrings(string s, string goal) {

    if (s.length() != goal.length())
        return false;

    vector<char> sdiff;
    vector<char> goaldiff;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != goal[i])
        {
            sdiff.push_back(s[i]);
            goaldiff.push_back(goal[i]);   // Fixed
        }
    }

    if (sdiff.size() == 2)
    {
        return sdiff[0] == goaldiff[1] &&
               sdiff[1] == goaldiff[0];
    }

    if (sdiff.size() == 0)
    {
        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'a']++;

            if (freq[s[i] - 'a'] > 1)   // Fixed
                return true;
        }
    }

    return false;
}
};