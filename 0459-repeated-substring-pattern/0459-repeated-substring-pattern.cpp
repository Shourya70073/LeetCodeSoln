class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t=s+s;
        t=t.substr(1,t.size()-2);
        if(t.find(s)!=-1){
            return true;
        }
            else{
               return false; 
            }
    }
};