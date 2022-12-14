class Solution {
public:
    int find(int data,vector<int>nums){
      for(int i=0;i<nums.size();i++){
          if(nums[i]==data){
              return i;
          }
      }
        return -1;
        
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>ans;
        vector<int>fans;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<nums2[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            st.push(nums2[i]);
        }
        reverse(ans.begin(),ans.end());
        
        for(int i=0;i<nums1.size();i++){
            int d=nums1[i];
            int index=find(d,nums2);
            fans.push_back(ans[index]);
        }
        return fans;
    }
};