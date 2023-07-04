class Solution {
public:
    int robby(vector<int> &nums,int n,vector<int>&dp){
        if(n==0){
            return nums[n];
        }
        if(n<0)
            return 0;
        
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int ans1=nums[n]+robby(nums,n-2,dp);
        int ans2=0+robby(nums,n-1,dp);
        
        dp[n]= max(ans1,ans2);
        return dp[n];
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
     return robby(nums,nums.size()-1,dp);
    }
};