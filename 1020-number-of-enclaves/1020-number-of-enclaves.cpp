class Solution {
public:
     void dfs(int row,int col, vector<vector<int>> &vis, vector<vector<int>>&mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        vis[row][col] = 1;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        for(int i = 0; i <4;i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow>=0 && nrow<n && ncol<m && ncol>=0 && !vis[nrow][ncol] && mat[nrow][ncol] == 1)
                dfs(nrow,ncol,vis,mat);
        }
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int j = 0; j < m;j++)
        {
            if(!vis[0][j] and grid[0][j] == 1) dfs(0,j,vis,grid);
            if(!vis[n-1][j] and grid[n-1][j] == 1) dfs(n-1,j,vis,grid);
        }
        
        for(int i = 0; i < n;i++)
        {
            if(!vis[i][0] and grid[i][0] == 1) dfs(i,0,vis,grid);
            if(!vis[i][m-1] and grid[i][m-1] == 1) dfs(i,m-1,vis,grid);
        }
        
        for(int i =0; i< n;i++)
        {
            for(int j = 0; j < m;j++)
            {
                if(!vis[i][j] and grid[i][j] == 1) count++;
            }
        } 
        return count;
    }
};