class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()==1){
            vector<vector<int>>temp;
            vector<int>t;
            t.push_back(nums[0]);
            temp.push_back(t);
            return temp;
        }
        vector<int>num;
        for(int i=1;i<nums.size();i++){
            num.push_back(nums[i]);
        }
        vector<vector<int>>smallans=permute(num);
        vector<vector<int>>fans;
        int d=nums[0];
        for(int i=0;i<smallans.size();i++){
            vector<int>temp=smallans[i];
            vector<int>copy=temp;
            for(int j=0;j<=temp.size();j++){
                temp.insert(temp.begin()+j,d);
                fans.push_back(temp);
                temp=copy;
                
            }
        }
        return fans;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans=permute(nums);
        set<vector<int>>st;
        vector<vector<int>>fans;
        for(auto i:ans){
            st.insert(i);
        }
        for(auto i:st){
            fans.push_back(i);
        }
        return fans;
    }
};