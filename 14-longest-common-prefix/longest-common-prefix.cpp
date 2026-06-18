class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        string temp = strs[0];
        int totalStrs = strs.size();
        for (int i = 0; i < temp.length(); i++)
        {
            for (int j = 1; j < totalStrs; j++)
            {
                if (i >= strs[j].length() || strs[j][i] != temp[i])
                {
                    return res;
                }
            }

            res += temp[i];
        }

        return res;
    }
};