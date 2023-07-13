class Solution {
public:
    int maximal(vector<vector<char>> &matrix,int i,int j,int &maxi,vector<vector<int>>&dp){
        
        if(i>=matrix.size() || j>=matrix[0].size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int right=maximal(matrix,i,j+1,maxi,dp);
        int diagonal=maximal(matrix,i+1,j+1,maxi,dp);
        int down=maximal(matrix,i+1,j,maxi,dp);
       
        
        if(matrix[i][j]=='1'){
            dp[i][j]=1+min(right,min(down,diagonal));
            maxi=max(dp[i][j],maxi);
            return dp[i][j];
        }
        else{
        dp[i][j]=0;
            return dp[i][j];
        }
        
    }
    int maximalSquare(vector<vector<char>>& matrix) {
         vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size(),-1));
        int maxi=0;
        maximal(matrix,0,0,maxi,dp);
        return maxi*maxi;
    }
};