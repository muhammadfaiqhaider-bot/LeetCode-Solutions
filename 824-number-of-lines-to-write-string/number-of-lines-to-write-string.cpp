class Solution {
public:
   
vector<int> numberOfLines(vector<int>& widths, string s) {

    int rowPixels = 0;
    int lines = 1;
    vector <int> result;
    for (int i = 0; i < s.length(); i++)
    {
        rowPixels = rowPixels + widths[s[i] - 'a'];

        if (rowPixels > 100)
        {
            int diff = rowPixels - 100;
            rowPixels = 0;
            if (diff > 0)
            {
                rowPixels += widths[s[i] - 'a'];
            }
            lines++;
        }

    }
    result.push_back(lines);
    result.push_back(rowPixels);

    return result;
}
};