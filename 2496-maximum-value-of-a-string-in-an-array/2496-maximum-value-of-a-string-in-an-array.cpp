
class Solution {
public:
 int maximumValue(vector<string>& strs) {
        int ans = 0;
       for(int i=0;i<strs.size();i++){
           int flag=0;
           for(int j=0;j<strs[i].size();j++){
               if(!(strs[i] [j] >= '0' and strs[i][j] <= '9')){
                   flag=1;
                   break;
               }
           }
           if(flag) {
             ans = max(ans, (int)strs[i]. size());
           }
          else{
            ans = max(ans, (int)stoi(strs[i]));
          } 

       }
        return ans;
    }
    
};