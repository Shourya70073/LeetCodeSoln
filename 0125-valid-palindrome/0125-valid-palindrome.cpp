class Solution {
public:
    bool checkPalindrome(string s)
{ 
        if(s==""){
            return true;
        }
    char *st=&s[0];
    char *e=&s[s.length()-1];
    while(st<=e){
        if(*st!=*e){
            return false;
        }
        else{
            st++;
            e--;
        }
    }
    return true;
}
    bool isPalindrome(string s) {
       
       string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'){
                ans.push_back(s[i]);
            }
         else if(s[i]>='A'&& s[i]<='Z'){
             ans.push_back(char(s[i]+32));
         }
        else if(s[i]==32){
                continue;
            }
            else{
                
                continue;
            }
        
        }
        bool ansp=checkPalindrome(ans);
        return ansp;
    }
};