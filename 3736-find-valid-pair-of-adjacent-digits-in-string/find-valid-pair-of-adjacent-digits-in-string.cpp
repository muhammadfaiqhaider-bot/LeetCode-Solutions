class Solution {
public:
    string findValidPair(string s) {

    int freq1[10] = { 0 };
    string temp = "";
    string res = "";

    for (int i = 0; i < s.length(); i++) {
        freq1[s[i] - '0']++;
    }

    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] != s[i + 1] &&
            s[i] == freq1[s[i] - '0'] + '0' &&
            s[i + 1] == freq1[s[i + 1] - '0'] + '0')
            return res + s[i] + s[i + 1];
    }

    return "";
} 

};
