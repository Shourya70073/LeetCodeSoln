class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
            
        }
        
        for(int i=0;i<t.size();i++){
            if(mp1[t[i]]!=mp2[t[i]]){
               return false;
            }
            
        }
        return true;
    }
};