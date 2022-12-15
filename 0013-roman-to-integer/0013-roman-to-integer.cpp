class Solution {
public:
unordered_map<char,int>mp;
    Solution(){
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
    }
    int romanToInt(string s) {
        int result=mp[s[s.length()-1]];
        
        for(int i=s.length()-2;i>=0;i--){
            if(mp[s[i]]<mp[s[i+1]]){
                result=result-mp[s[i]];
            }
            else{
                result=result+mp[s[i]];
            }
        }
        return result;
    }
};