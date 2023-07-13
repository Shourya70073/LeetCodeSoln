class Solution {
public:
    int getPaths(int i, int j, vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp) {
        if (i >= obstacleGrid.size() || j >= obstacleGrid[0].size() || obstacleGrid[i][j] == 1) {
            return 0;
        }
        if (i == obstacleGrid.size() - 1 && j == obstacleGrid[0].size() - 1) {
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int right = getPaths(i, j + 1, obstacleGrid,dp);
        int down = getPaths(i + 1, j, obstacleGrid,dp);
        dp[i][j]= right + down;
        return dp[i][j];
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>>dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),-1));
        return getPaths(0, 0, obstacleGrid,dp);
    }
};
