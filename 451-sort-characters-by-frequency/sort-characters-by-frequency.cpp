class Solution {
public:
    string frequencySort(string s) {
    int freq[128] = { 0 };
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        freq[ch]++;
    }

    string res = "";
    int total = 128;

    for (int i = 0; i < total; i++)
    {
        int max = 0;
        int maxIdx = -1;
        for (int j = 0; j < 128; j++)
        {
            if (freq[j] > max)
            {
                max = freq[j];
                maxIdx = j;
            }
        }

        if (maxIdx == -1) break; 

        for (int j = 0; j < max; j++)
        {
            res += char(maxIdx);
        }

        freq[maxIdx] = 0; 
    }

    return res;
}
};