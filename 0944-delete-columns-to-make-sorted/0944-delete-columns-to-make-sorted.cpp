class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int d=strs[0].size();
        int count=0;
        int col=0;
        char ch=' ';
        while(col<d){
          for(auto i:strs){
            if(i[col]>=ch){
                ch=i[col];
            }
                
            else{
                count++;
                break;
               
            }
        }
            ch=' ';
            col++;
            
        }
        return count;
        
    }
};