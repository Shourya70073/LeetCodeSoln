class Solution {
public:
   
    int arraySign(vector<int>& nums) {
        int prod=1;
        int minus=0;
        int isZero=0;
        
        for(auto i:nums){
            if(i==0){
            return 0;
            }
            else if(i<0){
                minus++;
            }
        }
        
        if(minus%2==0){
            return 1;
        }
        return -1;
        
        
    }
};