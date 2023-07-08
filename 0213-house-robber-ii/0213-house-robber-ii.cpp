class Solution {
public:
    int GetRobby(vector<int>&nums){
        vector<int>dp(nums.size());
        dp[0]=nums[0];
        
        for(int i=1;i<nums.size();i++){
            int pick=nums[i];
            if(i-2>=0)
            pick=pick+dp[i-2];
            int notPick=0+dp[i-1];
            
           dp[i]= max(pick,notPick);
        }
        return dp[nums.size()-1];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>nums1;
        vector<int>nums2;
        for(int i=1;i<nums.size();i++){
            nums1.push_back(nums[i]);
        }
        for(int i=0;i<nums.size()-1;i++){
          nums2.push_back(nums[i]);
        }
        
        return max(GetRobby(nums1),GetRobby(nums2));
    }
};