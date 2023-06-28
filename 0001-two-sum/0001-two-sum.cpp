class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int>temp;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(mp.find(diff)!=mp.end()){
                temp.push_back(mp[diff]);
                temp.push_back(i);
                return temp;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return temp;
    }
};