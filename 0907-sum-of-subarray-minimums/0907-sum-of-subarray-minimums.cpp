class Solution {
public:
    vector<int> prevsmall(vector<int>&arr){
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(0);
        }
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=-1;
            }
            else{
                 ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        
                 vector<int>ans=prevsmall(arr);
                 vector<int>res(arr.size());
                 for(int i=0;i<arr.size();i++){
                       if(ans[i]==-1){
                           res[i]=0+(i-ans[i])*arr[i];
                       }
                       else{
                           res[i]=res[ans[i]]+(i-ans[i])*arr[i];
                       }
                 }
                 int ss=0;
                 int m=pow(10,9)+7;
                 for (auto i:res){

ss=ss+i;
ss=ss%m;
                 }
                 return ss;
    }
};