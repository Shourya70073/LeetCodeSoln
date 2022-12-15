class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()==1){
            vector<vector<int>>ans;
            vector<int>t;
            t.push_back(nums[0]);
            ans.push_back(t);
            return ans;
        }
        int d=nums[nums.size()-1];
        nums.erase(nums.end()-1);
        vector<vector<int>>t1=permute(nums);
        vector<vector<int>>fans;
        
        for(int i=0;i<t1.size();i++){
            vector<int>temp=t1[i];
            for(int j=0;j<=temp.size();j++){
                temp.insert(temp.begin()+j,d);
                fans.push_back(temp);
                temp.erase(temp.begin()+j);
            }
        }
        return fans;
    }
};