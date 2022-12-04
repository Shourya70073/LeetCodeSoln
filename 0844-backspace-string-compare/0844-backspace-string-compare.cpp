class Solution {
public:
    string refresh(string s){
      string ans="";
        stack<char>st;
        for(auto i:s){
            if(i=='#')
            {
                if(st.empty()){
                    
                }
                
               else
                st.pop();
            }
             else
                st.push(i);
        }
        
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
    

        string s1=refresh(s);
        string s2=refresh(t);
        return s1==s2;
    }
};