class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') return true;
        else{
            return false;
        }
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        
        while(i<j){
            
            if(isVowel(s[i]) && isVowel(s[j])){
                char ch=s[i];
                s[i]=s[j];
                s[j]=ch;
                i++;
                j--;
            }
            else if (isVowel(s[i])==true && isVowel(s[j])==false){
                j--;
            }
            else if(isVowel(s[i])==false && isVowel(s[j])==true){
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};