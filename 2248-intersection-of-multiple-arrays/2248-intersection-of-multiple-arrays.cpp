class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            vector<int>temp=nums[i];
            for(auto i:temp){
               mp[i]++;
            }
        }
        
        int s=nums.size();
        
        for(auto i:mp){
            if(i.second==s){
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};