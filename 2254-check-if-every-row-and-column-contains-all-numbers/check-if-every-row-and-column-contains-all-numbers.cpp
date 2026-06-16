class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int size = matrix.size();
        for (int i = 0; i < size; i++)          
        {
            for (int digit = 1; digit <= size; digit++)  
            {
                int rowCount = 0;
                int colCount = 0;

                for (int j = 0; j < size; j++)
                {
                    if (matrix[i][j] == digit)
                    rowCount++;

                    if (matrix[j][i] == digit)
                    colCount++;
                }

                if (rowCount != 1 || colCount != 1)
                return false;
        }
    }

    return true;
    }
};