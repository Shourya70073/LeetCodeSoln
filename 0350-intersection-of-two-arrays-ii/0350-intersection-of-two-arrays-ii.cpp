class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ints;
        unordered_map<int,int>mp;
        for(auto i:nums1){
            mp[i]=mp[i]+1;
        }
        
        for(auto i:nums2){
            if(mp[i]!=0){
                ints.push_back(i);
                mp[i]=mp[i]-1;
            }
        }
        return ints;
        
    }
};