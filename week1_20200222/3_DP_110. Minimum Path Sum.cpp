#include <algorithm>

class Solution {
public:
    /**
     * @param grid: a list of lists of integers
     * @return: An integer, minimizes the sum of all numbers along its path
     */
    int minPathSum(vector<vector<int>> &grid) {
        // write your code here
        
        int n = grid.size();
        int m = grid[0].size();
        
        if(n == 1 && m == 1)
        return grid[0][0];
        
        for(int j = 1; j < m; j++)
        {
            grid[0][j] = grid[0][j] + grid[0][j-1];
        }
      
        
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(j==0)
                {
                    grid[i][j] = grid[i][j] + grid[i-1][j];
                }
                
                else {
                 
                 int x = grid[i-1][j];
                 int y = grid[i][j-1];
                 
                 grid[i][j] = min(x,y) + grid[i][j];
                    
                }
            }
        }
        return grid[n-1][m-1];
    }
};