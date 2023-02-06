class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>st=score;
        vector<string>ans;
        sort(score.begin(),score.end(),greater<int>());
        unordered_map<int,string>mp;
        for(int i=0;i<score.size();i++){
           if(i==0){
               mp[score[i]]="Gold Medal";
           }
            else if(i==1){
               mp[score[i]]="Silver Medal";
           }
           else if(i==2){
               mp[score[i]]="Bronze Medal";
           }
            else{
                mp[score[i]]=to_string(i+1);
            }
        }
        for(int i=0;i<st.size();i++ ){
            ans.push_back(mp[st[i]]);
        }
        
        return ans;
    }
};