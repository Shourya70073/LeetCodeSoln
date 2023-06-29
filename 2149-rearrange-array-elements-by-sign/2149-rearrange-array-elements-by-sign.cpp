class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
        vector<int>n;
        vector<int>ans;
        
        for(auto i:nums){
            if(i>=0)
                p.push_back(i);
            else
                n.push_back(i);
        }
        
        for(int i=0;i<p.size();i++){
            ans.push_back(p[i]);
            ans.push_back(n[i]);
        }
        return ans;
    }
};