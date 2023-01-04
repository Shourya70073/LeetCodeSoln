class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
       for(int i=0;i<tasks.size();i++){
           mp[tasks[i]]=mp[tasks[i]]+1;
       }
        int count=0;
        for(auto i:mp){
            if(i.second==1)
                return -1;
           if(i.second%3==0){
               count=count+i.second/3;
           }
            else{
                count=count+i.second/3+1;
            }
            }
        return count;
                
        
       
    }
};