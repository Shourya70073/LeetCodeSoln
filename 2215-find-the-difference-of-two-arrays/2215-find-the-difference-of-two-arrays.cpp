class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>>fans;
        
        set<int>ans1;
        set<int>ans2;
        
        unordered_map<int,int>l1;
        unordered_map<int,int>l2;
        
        for(int i=0;i<nums1.size();i++){
            l1[nums1[i]]=1;
        }
        
        for(int i=0;i<nums2.size();i++){
            l2[nums2[i]]=1;
        }
        
        
        for(int i=0;i<nums1.size();i++){
            if(!l2[nums1[i]]){
ans1.insert(nums1[i]);
            }
        }
        
        
        for(int i=0;i<nums2.size();i++){
            if(!l1[nums2[i]]){
ans2.insert(nums2[i]);
            }
        }
        
        
        vector<int>ans11;
        vector<int>ans22;
        
        for(auto i:ans1){
ans11.push_back(i);}
        for(auto i:ans2){
ans22.push_back(i);}
        
         fans.push_back(ans11);
        fans.push_back(ans22);
        
        return fans;
        
        
    }
};