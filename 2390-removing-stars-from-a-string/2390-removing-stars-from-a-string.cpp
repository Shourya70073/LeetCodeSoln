class Solution {
public:
    string removeStars(string s) {
        stack <char> st;
        string ans="";
        for(int i=0;i<s.size();i++){
            
          if(s[i]!='*')  {
              st.push(s[i]);
          }
            else if(s[i]=='*'){
                st.pop();
            }
        }
        
       while(!st.empty()){
           char cha=st.top();
           ans.push_back(cha);
           st.pop();
       }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};