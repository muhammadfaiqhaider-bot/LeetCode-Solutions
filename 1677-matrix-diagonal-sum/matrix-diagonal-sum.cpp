class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
    int row = mat.size();
    int col = mat[0].size();

    int p = 0;
    int s = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)p += mat[i][j];

            if (i == col - 1 - j)s += mat[i][j];
        }
    }

    int mid = (row / 2);

    if (row % 2 == 0)
        return s + p;
    else
        return s + p - mat[mid][mid];
}
};