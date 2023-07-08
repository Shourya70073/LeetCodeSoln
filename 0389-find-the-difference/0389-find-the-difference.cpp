class Solution {
public:
    char findTheDifference(string s, string t) {
  int c=0;
        s=s+t;
        for(auto x:s){
            c=c^x;
        }
        return c;
    }
};