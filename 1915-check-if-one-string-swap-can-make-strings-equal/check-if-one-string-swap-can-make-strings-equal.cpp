class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
    if (s1 == s2)return true;
    if (s1.length() != s2.length())return false;

    vector <char>s1_diff;
    vector <char>s2_diff;


    for (int i = 0; i < s1.length();i++) {
        if (s1[i] != s2[i]) {
            s1_diff.push_back(s1[i]);
            s2_diff.push_back(s2[i]);

        }
    }
    if (s1_diff.size() == 2)
    {
        if (s1_diff[0] == s2_diff[1] && s1_diff[1] == s2_diff[0])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
    
}
};