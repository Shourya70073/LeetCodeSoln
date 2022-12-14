class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>an;
        stack<int>ans;
        for(auto i:asteroids){
            while(!ans.empty() && ans.top()>0 && i<0){
                int k=-1*i;
                int diff=ans.top()-k;
                if(diff>0){
                 i=0;
                    
                }
               else if(diff<0){
                    ans.pop();
                }
                else{
                    i=0;
                    ans.pop();
                }
            }
            if(i){
                ans.push(i);
            }
        }
        
        while(!ans.empty()){
             an.push_back(ans.top());
            ans.pop();
        }
        reverse(an.begin(),an.end());
        return an;
    }
};