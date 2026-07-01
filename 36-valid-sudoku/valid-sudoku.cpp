class Solution {
public:
    bool checker(vector<vector<char>>& arr, int r_pos, int c_pos, char digit)
{
    for (int i = c_pos + 1; i < 9; i++)
    {
        if (arr[r_pos][i] == digit) return false;
    }

    for (int i = r_pos + 1; i < 9; i++)
    {
        if (arr[i][c_pos] == digit) return false;
    }
    
    int startRow = r_pos - (r_pos % 3);
    int startCol = c_pos - (c_pos % 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i + startRow == r_pos && j + startCol == c_pos)
            {
                continue;
            }
            if (arr[i + startRow][j + startCol] == digit )
            {
                return false;
            }
        }
    }

    return true;
}

bool isValidSudoku(vector<vector<char>>& board)
{
    int row = board.size();
    int col = board[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (board[i][j] == '.')
            {
                continue;
            }
            else
            {
                if (checker(board, i, j, board[i][j]))
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
    }

    return true;
}
};