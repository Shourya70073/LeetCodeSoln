class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(auto i:moves){
            if(i=='U'){
                y=y+1;
            }
            else if(i=='D'){
                y=y-1;
            }
            else if(i=='R')
                x=x+1;
            else
                x=x-1;
                
    }
        if(x==0 && y==0){
            return true;
        }
        else {
            return false;
        }
    }
};