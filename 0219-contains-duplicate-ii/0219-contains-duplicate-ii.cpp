class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l=0;
        unordered_map<int,int>mp;
        for(int r=0;r<nums.size();r++){
            if(r-l>k){
               int t=nums[l];
                mp.erase(t);
                l++;
            }
            
            if(mp.find(nums[r])!=mp.end()){
                return true;
            }
            else{
                mp[nums[r]]=1;
            }
        }
        return false;
    }
};