class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums2) {
          stack<int>st;
        vector<int>ans;
        vector<int>fans;
        for(int i=2*nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i%nums2.size()]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            st.push(nums2[i%nums2.size()]);
        }
        reverse(ans.begin(),ans.end());
        
        
        for(int i=0;i<nums2.size();i++){
            fans.push_back(ans[i]);
        }
        return fans;
    }
};