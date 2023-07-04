class Solution {
public:
    int minCost(vector<int>&cost,int n,vector<int>&dp){
        if(n==0 || n==1){
            return cost[n];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
       int ans2=INT_MAX;
        int ans1=minCost(cost,n-1,dp)+cost[n];
    if(n-2>=0)
       ans2=minCost(cost,n-2,dp)+cost[n];
        
        dp[n]=min(ans1,ans2);
        return dp[n];
    }
 
    int minCostClimbingStairs(vector<int>& cost) {
          int n=cost.size();
          
         vector<int> dp(n,-1);
        
        
        return min(minCost(cost,n-1,dp),minCost(cost,n-2,dp));
           
    }
};