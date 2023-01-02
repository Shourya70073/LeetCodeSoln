class Solution {
public:
    
    bool check1(string word){
        if(word[0]>=65 && word[0]<=97){
            for(int i=1;i<word.size();i++){
                if(word[i]<=90)
                    return false;
            }
            return true;
        }
        return false;
    }
    bool check2(string word){
        for(int i=0;i<word.size();i++){
            if(word[i]>90)
                return false;
        }
        return true;
    }
    bool check3(string word){
        for(int i=0;i<word.size();i++){
            if(word[i]>=65 && word[i]<=90)
                return false;
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        bool b,c,d;
        b=check1(word);
        c=check2(word);
        d=check3(word);
        
        
        return b || c|| d;
    }
};