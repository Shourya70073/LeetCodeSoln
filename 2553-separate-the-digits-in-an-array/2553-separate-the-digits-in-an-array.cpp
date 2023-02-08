class Solution {
public:
    vector<int> separateDigits(vector<int>& num) {
       
        vector<int>ans;
        for(int i=0;i<num.size();i++){
            int nums=num[i];
             vector<int>small;
              while(nums>0){
            int rem=nums%10;
            small.push_back(rem);
            nums=nums/10;
        }
            reverse(small.begin(),small.end());
        for(auto i:small){
            ans.push_back(i);
        }
        }
       
        
        return ans;
    }
};