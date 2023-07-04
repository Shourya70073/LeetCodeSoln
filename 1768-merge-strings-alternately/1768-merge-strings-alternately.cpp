class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int i=0;
        int j=0;
        
        while(i<word1.size() || j<word2.size()){
            
            if(i<word1.size()){
                ans=ans+word1[i];
                
            }
            if(j<word2.size()){
                ans=ans+word2[j];
            }
            i++;
            j++;
        }
        return ans;
    }
};