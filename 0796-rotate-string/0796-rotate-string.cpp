class Solution {
public:
    bool rotateString(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        
        for(int i=0;i<s.size();i++){
            if(s==t){
                return true;
            }
            s=s.substr(1)+s[0];
        }
        return false;
    }
};