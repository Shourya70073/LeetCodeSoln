class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2;
        for(int i=0;i<s.size();i++){
            if(s1.empty() && s[i]=='#') continue;
            else if(s[i]=='#') s1.pop();
            else s1.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(s2.empty() && t[i]=='#') continue;
            else if(t[i]=='#') s2.pop();
            else s2.push(t[i]);
        }
       
        while(!s1.empty() && !s2.empty()){
            if(s1.top()!=s2.top()) return false;
            s1.pop();
            s2.pop();
        }
        if(s1.empty() && s2.empty()) return true;
        return false;
    }
};  