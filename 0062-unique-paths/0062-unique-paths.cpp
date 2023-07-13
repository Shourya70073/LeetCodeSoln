class Solution {
public:
    int get(int m,int n,vector<vector<int>>&dp){
          if(m==0 && n==0){
            return 1;
        }
       else if(m<0 || n<0){
           return 0;
       }
        
       if(dp[m][n]!=-1){
           return dp[m][n];
       }
         int a=get(m-1,n,dp);
       
         int b=get(m,n-1,dp);
        
        dp[m][n]= a+b;
        return dp[m][n];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
      return get(m-1,n-1,dp);
    }
};