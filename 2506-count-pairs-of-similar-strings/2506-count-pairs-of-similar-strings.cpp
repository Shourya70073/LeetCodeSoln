class Solution {
public:
    int similarPairs(vector<string>& words) {
        map<set<int> , int> mp;
        for(auto s:words){
            set<int> st;
            for(char c:s){
                st.insert(c);
            }
            
            mp[st]++;
                    
        }
        int res=0;
        for(auto p:mp){
            if(p.second>1){
                int n=p.second;
                res = res + (n*(n-1))/2; 
            }
        }
        return res;
    }
};