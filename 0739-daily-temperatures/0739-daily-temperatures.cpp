class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>st;
        vector<int>ans;
        for(int i=t.size()-1;i>=0;i--){
            while(!st.empty() && t[st.top()]<=t[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
       
        vector<int>fans;
        for(int i=0;i<t.size();i++){
            if(ans[i]==-1){
                fans.push_back(0);
            }
            else{
                int d=ans[i]-i;
                fans.push_back(d);
            }
        }
        return fans;
    }
};