class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        for(int i=0;i<nums.size();i++){
            vector<int>temp;
            int a=nums[i];
            int t=-a;
            int k=i+1;
            int j=nums.size()-1;
            while(k<j){
                if(nums[k]+nums[j]==t){
                   st.insert({nums[i],nums[k],nums[j]});
                    k++;
                    j--;
                    
                 
                }
                else if(nums[k]+nums[j]>t){
                    j--;
                }
                else{
               k++;
                }
            }
            
        }
        for(auto i:st){
            ans.push_back(i);
        }
        return ans;
    }
};