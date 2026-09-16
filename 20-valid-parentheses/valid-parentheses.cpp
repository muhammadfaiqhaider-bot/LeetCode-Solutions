class Solution {
public:
    bool isValid(string s)
    {
        vector<int> ans;

        for (int i = 0; i < s.length(); i++)
        {
            // Opening brackets
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                ans.push_back(s[i]);
            }

            // Closing brackets
            else
            {
                if (ans.empty())
                    return false;

                if (s[i] == ')' && ans.back() == '(')
                    ans.pop_back();

                else if (s[i] == '}' && ans.back() == '{')
                    ans.pop_back();

                else if (s[i] == ']' && ans.back() == '[')
                    ans.pop_back();

                else
                    return false;
            }
        }

        return ans.empty();
    }
};