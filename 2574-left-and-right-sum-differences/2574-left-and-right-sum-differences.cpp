class Solution {
public:
    int modd(int n){
        if(n<0)
            return -n;
        return n;
    }
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        vector<int>pre(n);
        pre[0]=0;
        vector<int>suff(n);
        suff[n-1]=0;
        int d=n-2;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i-1];
            suff[d]=suff[d+1]+nums[d+1];
            d--;
        }
       for(int i=0;i<n;i++){
          ans[i]=modd(pre[i]-suff[i]);
       }
        return ans;
        
        
    }
};