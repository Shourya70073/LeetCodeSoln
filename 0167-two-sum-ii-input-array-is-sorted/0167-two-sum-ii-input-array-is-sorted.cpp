class Solution {
public:
    vector<int> twoSum(vector<int>& to, int k) {
        vector<int>ans;
        int i=0;
        int j=to.size()-1;
        while(i!=j){
            int sum=to[i]+to[j];
            if(sum>k)
                j--;
            else if(sum<k)
                i++;
            else
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
        }
        
        return ans;
    }
};