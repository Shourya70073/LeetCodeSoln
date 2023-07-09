class Solution {
public:
    char opp(char t){
        if(t==')'){
            return '(';
        }
        else if(t==']'){
            return '[';
        }
        else{
            return '{';
        }
    }
    bool isValid(string s) {
        if(s.size()==1){
            return false;
        }
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==')' ||s[i]==']' ||s[i]=='}' ){
                if(!st.empty()){
                      char k=st.top();
                char p= opp(s[i]);
                if(p==k){
                    st.pop();
                }
                else{
                    return false;
                }
                }
                else{
                    return false;
                }
              
            }
            else{
                st.push(s[i]);
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};