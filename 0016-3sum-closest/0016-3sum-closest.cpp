class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff=INT_MAX;
        int ans=-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int constant=nums[i];
            int start=i+1;
            int end=nums.size()-1;
            while(start<end){
                if(constant+nums[start]+nums[end]==target){
                    return target;
                }
                else if(abs(constant+nums[start]+nums[end]-target)<diff){
                 diff=abs(constant+nums[start]+nums[end]-target); 
                    ans=constant+nums[start]+nums[end];
                }
                else if(constant+nums[start]+nums[end]>target){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return ans;;
    }
};