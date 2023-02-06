class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
             mp[nums[i]]++;
        }
        
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(!mp[i]){
                 ans.push_back(i);
            }
        }
        return ans;
    }
};