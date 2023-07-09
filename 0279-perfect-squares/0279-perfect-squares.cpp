class Solution {
public:

    int numSquare(int n,vector<int>&dp) {
        if(n==0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
      
        int ans=n;
        for(int i=1;i*i<=n;i++){
           ans=min(ans,1+numSquare(n-i*i,dp));
        }
        dp[n]=ans;
        return dp[n];
    }
     int numSquares(int n) {
       vector<int>dp(n+1,-1);
         return numSquare(n,dp);
    }
    
    
};