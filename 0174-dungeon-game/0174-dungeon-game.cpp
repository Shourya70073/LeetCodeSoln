class Solution {
public:
    int dp[205][205];
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        memset(dp, -1, sizeof(dp));
        return recur(0, 0, dungeon.size(), dungeon[0].size(), dungeon);
    }
    
    long recur(int i, int j, int n, int m, vector<vector<int>>& d){
        if(i >= n || j >= m){
            return INT_MAX;
        }
        
        if(i == n-1 && j == m-1){
            return d[i][j] <= 0 ? abs(d[i][j]) + 1 : 1;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        int op1 = recur(i+1, j, n, m, d);
        int op2 = recur(i, j+1, n, m, d);
        
        int minHealthRequired = min(op1, op2) - d[i][j];
        return dp[i][j] = (minHealthRequired <= 0) ? 1 : minHealthRequired;   
    }
};