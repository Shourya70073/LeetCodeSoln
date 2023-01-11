class Solution {
public:
    void dfs(int i,int j,int r,int c,vector<vector<int>> &vis,vector<vector<char>>board){
        if(i<0 || j<0 || i>=r || j>=c || vis[i][j]==1 || board[i][j]=='X' )
            return;
        vis[i][j]=1;
        dfs(i+1,j,r,c,vis,board);
        dfs(i,j+1,r,c,vis,board);
        dfs(i-1,j,r,c,vis,board);
        dfs(i,j-1,r,c,vis,board);
    }
    
    void solve(vector<vector<char>>& board) {
        int r=board.size();
        int c=board[0].size();
        
        vector<vector<int>>vis(r,vector<int>(c,0));
        
       
        for(int i=0;i<c;i++){
            if(board[0][i]=='O' && vis[0][i]==0){
                dfs(0,i,r,c,vis,board);
            }
        }
        for(int i=0;i<c;i++){
            if(board[r-1][i]=='O' && vis[r-1][i]==0){
                dfs(r-1,i,r,c,vis,board);
            }
        }
         for(int i=0;i<r;i++){
            if(board[i][0]=='O' && vis[i][0]==0){
                dfs(i,0,r,c,vis,board);
            }
        }
         for(int i=0;i<r;i++){
            if(board[i][c-1]=='O' && vis[i][c-1]==0){
                dfs(i,c-1,r,c,vis,board);
            }
        }
        
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(vis[i][j]==0)
                    board[i][j]='X';
            }
        }
        
        
    }
};