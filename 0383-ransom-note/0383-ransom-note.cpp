class Solution {
public:
    bool canConstruct(string ransomNote, string magazine){
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(auto i:ransomNote){
            mp1[i]++;
        }
        for(auto i:magazine){
            mp2[i]++;
        }
        
        
        for(auto i:ransomNote){
            if(mp1[i]>mp2[i]){
                return false;
            }
        }
        return true;
        
      
        
    }
};