class Solution {
public:
    int similarPairs(vector<string>& words) {
        map<set<int> , int> mp;
        for(auto s:words){
            set<int> st;
            for(char c:s){
                st.insert(c);// it finds all the unique character in a string store it to set
            }
            
            mp[st]++;//above set is maped here 
                     // i.e. counting number of string contain these unique characters 
        }
        int res=0;
        for(auto p:mp){
            if(p.second>1){
                int n=p.second;
                res = res + (n*(n-1))/2; // here just counting number of pair possible (it's simple mathematics)
            }
        }
        return res;
    }
};