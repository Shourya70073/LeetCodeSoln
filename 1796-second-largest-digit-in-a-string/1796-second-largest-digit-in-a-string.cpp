class Solution {
private:
    unordered_map<int,int>mp;
public:
    Solution(){
        mp['1']=1;
        mp['2']=2;
        mp['3']=3;
        mp['4']=4;
        mp['5']=5;
        mp['6']=6;
        mp['7']=7;
        mp['8']=8;
        mp['9']=9;
        mp['0']=0;
    }
    int secondHighest(string s) {
        set<int>st;
        vector<int>vt;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0'  && s[i]<='9'){
                st.insert(mp[s[i]]);
            }
        }
        if(st.size()==1 || st.size()==0){
            return -1;
        }
        
        for(auto i:st){
            vt.push_back(i);
        }
        
        sort(vt.begin(),vt.end());
        return vt[vt.size()-2];
    }
};