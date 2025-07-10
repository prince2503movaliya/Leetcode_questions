class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {

        int minSum = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                minSum += grid[0][i];
                minSum += grid[j][rows - 1];
            }
        }

        return minSum;
    }
};