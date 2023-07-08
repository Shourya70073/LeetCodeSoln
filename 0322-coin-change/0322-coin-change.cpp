class Solution {
public:
    int  getCoin(vector<int>&coins,int amt,vector<int>&dp){
        if(amt==0){
            return  0;
        }
        if(amt<0){
            return INT_MAX;
        }
        if(dp[amt]!=-1){
            return dp[amt];
        }
        int mini=INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans=getCoin(coins,amt-coins[i],dp);
            if(ans!=INT_MAX){
                mini=min(1+ans,mini);
            }
        }
        dp[amt]= mini;
        return dp[amt];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
       int ans=getCoin(coins,amount,dp);
       if(ans==INT_MAX){
           return -1;
       }
        else{
            return ans;
        }
    }
};