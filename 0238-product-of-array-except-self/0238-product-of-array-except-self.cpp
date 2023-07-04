class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int last=nums.size()-1;
        
        vector<int>pf(nums.size(),-1);
        vector<int>sf(nums.size(),-1);
        
        int pfp=1;
        int sfp=1;
        
        for(int i=0;i<nums.size();i++){
            
            pfp=pfp*nums[i];
            pf[i]=pfp;
            
            sfp=sfp*nums[last];
            sf[last]=sfp;
            last--;
            
        }
        
        vector<int>ans(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            
            if(i==0){
                ans[i]=sf[i+1];
            }
            else if(i==nums.size()-1){
                ans[i]=pf[i-1];
            }
            else{
                ans[i]=pf[i-1]*sf[i+1];
            }
        }
        return ans;
        
    }
};