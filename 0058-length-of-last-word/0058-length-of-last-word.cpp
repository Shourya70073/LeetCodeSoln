class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==0){
            return 0;
        }
        int d=0;
        int k=s.length()-1;
        while(s[k]==32){
            k--;
        }
        for(int i=k;i>=0;i--){
            if(s[i]==32)
                break;
            d++;
        }
        return d;
    }
};