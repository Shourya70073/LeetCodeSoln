class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>dupli=heights;
        sort(dupli.begin(),dupli.end());
        int cnt=0;
        for(int i=0;i<dupli.size();i++){
            if(heights[i]!=dupli[i])
                cnt++;
            
                
        }
        return cnt;
    }
};