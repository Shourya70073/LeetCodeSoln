class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n);
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int pick=nums[i];
            if(i-2>=0)
                pick=pick+dp[i-2];
            int notpick=0+dp[i-1];
            
            dp[i]=max(pick,notpick);
     }
        return dp[n-1];
    
    }
};