class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>mp;
        for(int i=0;i<candyType.size();i++){
            mp[candyType[i]]=mp[candyType[i]]+1;
        }
        
        if(candyType.size()==2){
            return 1;
        }
        else{
            int k=candyType.size()/2;
            if(mp.size()==k){
                return k;
            }
            else if(mp.size()<k){
                if(mp.size()==1){
                    return 1;
                }
                else{
                    return mp.size();
                }
            }
            else{
                return k;
            }
        }
    }
};