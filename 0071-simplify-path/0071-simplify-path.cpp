class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
      path.push_back('/');
      string curr="";
      for(auto i:path){
          if(i=='/'){
             if(curr==".."){
                 if(!st.empty()){
                     st.pop();
                 }
             }
             
            else if(curr!="" && curr!="."){
                 st.push(curr);
             }
              curr="";
             
             }
             else{
                 curr=curr+i;
             }
      }
             
      string ans="";
      while(!st.empty()){
          string t=st.top();
          ans="/" +t+ans;
          st.pop();
      }
             return ans.size()==0?"/":ans;
    }
};